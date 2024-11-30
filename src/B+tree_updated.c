#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_KEYS 3  // Maximum number of keys in a node (B+ tree of order 4)
#define MAX_LINE_LENGTH 1024
#define MAX_DATA_LENGTH 256

typedef struct Node {
    int is_leaf;
    int num_keys;
    int keys[MAX_KEYS];  // Keys in the node
    char* data[MAX_KEYS]; // Corresponding row data
    struct Node* children[MAX_KEYS + 1];  // Child pointers
    struct Node* next;  // Link to the next leaf node
} Node;

typedef struct BPlusTree {
    Node* root;
} BPlusTree;

// Function prototypes
Node* create_node(int is_leaf);
BPlusTree* initialize_tree();
void insert(BPlusTree* tree, int key, char* row_data);
void split_child(Node* parent, int pos, Node* child);
void insert_non_full(Node* node, int key, char* row_data);
void split_parent(Node* parent, int pos, Node* child);
void print_tree(Node* node, int level);
void head(BPlusTree* tree, int n);
void tail(BPlusTree* tree, int n);
void load_csv(BPlusTree* tree, const char* filename, const char* delimiter, int skip_header);
void free_tree(Node* node);
void free_node(Node* node);

// Create a new B+ tree node
Node* create_node(int is_leaf) {
    Node* node = (Node*)malloc(sizeof(Node));
    node->is_leaf = is_leaf;
    node->num_keys = 0;
    node->next = NULL;
    for (int i = 0; i <= MAX_KEYS; i++) {
        node->children[i] = NULL;
    }
    for (int i = 0; i < MAX_KEYS; i++) {
        node->data[i] = NULL;
    }
    printf("Created a new %s node\n", is_leaf ? "leaf" : "internal");
    return node;
}

// Initialize a new B+ tree
BPlusTree* initialize_tree() {
    BPlusTree* tree = (BPlusTree*)malloc(sizeof(BPlusTree));
    tree->root = create_node(1);  // Start with a leaf node
    printf("Initialized a new B+ tree with a leaf root node\n");
    return tree;
}

// Insert a key-row pair into the B+ tree
void insert(BPlusTree* tree, int key, char* row_data) {
    Node* root = tree->root;
    printf("Inserting key %d with data: %s\n", key, row_data);

    // If root is full, split it and create a new root
    if (root->num_keys == MAX_KEYS) {
        Node* new_root = create_node(0);  // New root is not a leaf
        new_root->children[0] = root;
        split_child(new_root, 0, root);
        tree->root = new_root;
        printf("Split root and created a new root\n");
        insert_non_full(new_root, key, row_data);
    } else {
        insert_non_full(root, key, row_data);
    }
}

void split_child(Node* parent, int pos, Node* child) {
    Node* new_child = create_node(child->is_leaf);
    new_child->num_keys = MAX_KEYS / 2;

    // Move the second half of keys and data to the new child
    for (int i = 0; i < MAX_KEYS / 2; i++) {
        new_child->keys[i] = child->keys[i + MAX_KEYS / 2 + 1];
        new_child->data[i] = child->data[i + MAX_KEYS / 2 + 1];
        child->keys[i + MAX_KEYS / 2 + 1] = 0;  // Clear moved keys in the original child for clarity
        child->data[i + MAX_KEYS / 2 + 1] = NULL;  // Clear moved data
    }

    if (!child->is_leaf) {
        for (int i = 0; i <= MAX_KEYS / 2; i++) {
            new_child->children[i] = child->children[i + MAX_KEYS / 2 + 1];
            child->children[i + MAX_KEYS / 2 + 1] = NULL;  // Clear moved child pointers
        }
    }

    child->num_keys = MAX_KEYS / 2;

    // Insert the median key from the child into the parent
    for (int i = parent->num_keys; i > pos; i--) {
        parent->children[i + 1] = parent->children[i];
        parent->keys[i] = parent->keys[i - 1];
        parent->data[i] = parent->data[i - 1];  // Move the data as well
    }

    // Insert the median key into the parent
    parent->children[pos + 1] = new_child;
    parent->keys[pos] = child->keys[MAX_KEYS / 2];  // Move the median key to the parent
    parent->data[pos] = child->data[MAX_KEYS / 2];  // Move the median data to the parent
    parent->num_keys++;

    // Clear the moved median's data and key from the child
    child->keys[MAX_KEYS / 2] = 0;
    child->data[MAX_KEYS / 2] = NULL;

    // Debug: Print the state of the parent and the new child
    printf("Parent after split (keys): ");
    for (int i = 0; i < parent->num_keys; i++) {
        printf("%d ", parent->keys[i]);
    }
    printf("\n");

    if (child->is_leaf) {
        new_child->next = child->next;
        child->next = new_child;
        printf("Updated linked list for leaf nodes\n");
    }
}


// Modified insert_non_full function to accommodate changes
void insert_non_full(Node* node, int key, char* row_data) {
    int i = node->num_keys - 1;

    if (node->is_leaf) {
        // Insert key in the correct position
        while (i >= 0 && key < node->keys[i]) {
            node->keys[i + 1] = node->keys[i];
            node->data[i + 1] = node->data[i];
            i--;
        }
        node->keys[i + 1] = key;
        node->data[i + 1] = strdup(row_data);  // Copy data to ensure it's not overwritten
        node->num_keys++;
        printf("Inserted key %d at leaf node with data: %s\n", key, row_data);
    } else {
        // Find the child to recurse into
        while (i >= 0 && key < node->keys[i]) {
            i--;
        }
        i++;

        if (node->children[i]->num_keys == MAX_KEYS) {
            split_child(node, i, node->children[i]);
            if (key > node->keys[i]) {
                i++;
            }
        }
        insert_non_full(node->children[i], key, row_data);
    }
}

// Split the parent if necessary
void split_parent(Node* parent, int pos, Node* child) {
    if (parent->num_keys == MAX_KEYS) {
        Node* new_parent = create_node(0);
        new_parent->children[0] = parent;
        split_child(new_parent, 0, parent);
        parent = new_parent;
    }
}

// Insert into a non-full node


// Print the B+ tree structure
void print_tree(Node* node, int level) {
    if (node == NULL) return;

    // Print current level's keys and data
    printf("Level %d: ", level);
    for (int i = 0; i < node->num_keys; i++) {
        if (node->data[i] != NULL) {
            printf("Key: %d, Data: %s | ", node->keys[i], node->data[i]);
        } else {
            printf("Key: %d, Data: NULL | ", node->keys[i]);
        }
    }
    printf("\n");

    // Recur for children if not a leaf
    if (!node->is_leaf) {
        for (int i = 0; i <= node->num_keys; i++) {
            print_tree(node->children[i], level + 1);
        }
    }
}

// View the first N rows (head functionality)
void head(BPlusTree* tree, int n) {
    Node* current = tree->root;
    while (!current->is_leaf) {
        current = current->children[0];
    }

    printf("First %d rows:\n", n);
    int count = 0;
    while (current && count < n) {
        for (int i = 0; i < current->num_keys && count < n; i++) {
            printf("Key: %d, Data: %s\n", current->keys[i], current->data[i]);
            count++;
        }
        current = current->next;  // Move to the next leaf node
    }
}

// View the last N rows (tail functionality)
void tail(BPlusTree* tree, int n) {
    Node* current = tree->root;
    while (!current->is_leaf) {
        current = current->children[current->num_keys];
    }

    // Traverse backwards to find the starting point
    int count = 0;
    Node* temp = current;
    while (temp) {
        count += temp->num_keys;
        temp = temp->next;
    }

    int rows_to_skip = count - n;
    count = 0;
    current = tree->root;
    while (!current->is_leaf) {
        current = current->children[0];
    }

    // Skip to the desired starting point for printing
    while (current && count < rows_to_skip) {
        for (int i = 0; i < current->num_keys; i++) {
            if (count >= rows_to_skip) break;
            count++;
        }
        if (count < rows_to_skip) {
            current = current->next;
        }
    }

    printf("Last %d rows:\n", n);
    while (current) {
        for (int i = 0; i < current->num_keys && count < rows_to_skip + n; i++) {
            printf("Key: %d, Data: %s\n", current->keys[i], current->data[i]);
            count++;
        }
        current = current->next;
    }
}





// Load data from CSV into the B+ tree
void load_csv(BPlusTree* tree, const char* filename, const char* delimiter, int skip_header) {
    FILE* file = fopen(filename, "r");
    if (!file) {
        perror("Failed to open CSV file");
        exit(EXIT_FAILURE);
    }

    char line[MAX_LINE_LENGTH];
    int line_num = 0;
    while (fgets(line, sizeof(line), file)) {
        if (skip_header && line_num == 0) {
            line_num++;
            continue;
        }

        // Tokenize the line based on the delimiter
        char* token = strtok(line, delimiter);
        int key = 0;
        if (token != NULL) {
            key = atoi(token);  // Convert the first token to an integer key
        }

        char* data = malloc(MAX_DATA_LENGTH * sizeof(char));
        token = strtok(NULL, "\n");  // Get the rest of the line as the data

        if (token != NULL) {
            strncpy(data, token, MAX_DATA_LENGTH - 1);
            data[MAX_DATA_LENGTH - 1] = '\0';  // Ensure null termination
        }

        insert(tree, key, data);

        free(data);
        line_num++;
    }

    fclose(file);
    printf("Loaded CSV data into B+ tree\n");
}

// Free memory of the B+ tree
void free_tree(Node* node) {
    if (node == NULL) return;
    if (!node->is_leaf) {
        for (int i = 0; i <= node->num_keys; i++) {
            free_tree(node->children[i]);
        }
    }
    free_node(node);
}

void free_node(Node* node) {
    for (int i = 0; i < node->num_keys; i++) {
        if (node->data[i] != NULL) {
            free(node->data[i]);
        }
    }
    free(node);
}

void tree_to_csv(BPlusTree* tree, const char* filename, const char* separator) {
    FILE* file = fopen(filename, "w");
    if (!file) {
        perror("Error opening file");
        return;
    }

    // Traverse the tree starting from the root
    Node* current = tree->root;

    // Perform a level-order traversal (breadth-first traversal)
    Node* queue[MAX_KEYS + 1];
    int front = 0, rear = 0;

    queue[rear++] = current;  // Start with the root node

    while (front != rear) {
        current = queue[front++];  // Dequeue a node

        // Process the current node (write its keys and data to the CSV)
        if (current != NULL) {
            for (int i = 0; i < current->num_keys; i++) {
                if (current->data[i] != NULL) {
                    fprintf(file, "%d%s%s\n", current->keys[i], separator, current->data[i]);
                }
            }

            // If current node is not a leaf, enqueue its children
            if (!current->is_leaf) {
                for (int i = 0; i <= current->num_keys; i++) {
                    queue[rear++] = current->children[i];
                }
            }
        }
    }

    fclose(file);
    printf("B+ tree converted to CSV file: %s\n", filename);
}

int main() {
    BPlusTree* tree = initialize_tree();

    // Example usage


    // Load data from CSV
    load_csv(tree, "data.csv", ",", 1);
    print_tree(tree->root, 0);
    // Print first 5 rows
    head(tree, 3);

    // Print last 5 rows
    tail(tree, 2);
    tree_to_csv(tree, "output.csv", ";");
    // Free memory
    free_tree(tree->root);
    free(tree);

    return 0;
}
