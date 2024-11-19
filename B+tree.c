#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_KEYS 3  // Maximum number of keys in a node (this is for a B+ tree of order 4)
#define MAX_LINE_LENGTH 1024
#define MAX_DATA_LENGTH 256

typedef struct Node {
    int is_leaf;
    int num_keys;
    int keys[MAX_KEYS];  // Store keys in the node (here they can be the index)
    char* data[MAX_KEYS]; // Store corresponding row data in the node
    struct Node* children[MAX_KEYS + 1];  // Pointer to child nodes
    struct Node* next;  // For leaf nodes, link to next leaf
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
void traverse(Node* node);
void load_csv(BPlusTree* tree, const char* filename, const char* delimiter, int skip_header);
void head(BPlusTree* tree, int n);
void tail(BPlusTree* tree, int n);

// Create a new B+ tree node
Node* create_node(int is_leaf) {
    Node* node = (Node*)malloc(sizeof(Node));
    node->is_leaf = is_leaf;
    node->num_keys = 0;
    node->next = NULL;
    for (int i = 0; i <= MAX_KEYS; i++) {
        node->children[i] = NULL;
    }
    return node;
}

// Initialize a new B+ tree
BPlusTree* initialize_tree() {
    BPlusTree* tree = (BPlusTree*)malloc(sizeof(BPlusTree));
    tree->root = create_node(1);  // Start with a leaf node
    return tree;
}

// Insert a key-row pair into the B+ tree
void insert(BPlusTree* tree, int key, char* row_data) {
    Node* root = tree->root;

    if (root->num_keys == MAX_KEYS) {  // Root is full, split it
        Node* new_root = create_node(0);  // New root is not a leaf
        new_root->children[0] = root;
        split_child(new_root, 0, root);
        tree->root = new_root;
        insert_non_full(new_root, key, row_data);
    } else {
        insert_non_full(root, key, row_data);
    }
}

// Split a child node
void split_child(Node* parent, int pos, Node* child) {
    Node* new_child = create_node(child->is_leaf);
    new_child->num_keys = MAX_KEYS / 2;

    for (int i = 0; i < MAX_KEYS / 2; i++) {
        new_child->keys[i] = child->keys[i + MAX_KEYS / 2 + 1];
        new_child->data[i] = child->data[i + MAX_KEYS / 2 + 1];
    }

    if (!child->is_leaf) {
        for (int i = 0; i <= MAX_KEYS / 2; i++) {
            new_child->children[i] = child->children[i + MAX_KEYS / 2 + 1];
        }
    }

    child->num_keys = MAX_KEYS / 2;

    for (int i = parent->num_keys; i >= pos + 1; i--) {
        parent->children[i + 1] = parent->children[i];
    }
    parent->children[pos + 1] = new_child;

    for (int i = parent->num_keys - 1; i >= pos; i--) {
        parent->keys[i + 1] = parent->keys[i];
    }
    parent->keys[pos] = child->keys[MAX_KEYS / 2];

    parent->num_keys++;

    if (child->is_leaf) {
        new_child->next = child->next;
        child->next = new_child;
    }
}

// Insert into a non-full node
void insert_non_full(Node* node, int key, char* row_data) {
    int i = node->num_keys - 1;

    if (node->is_leaf) {
        while (i >= 0 && key < node->keys[i]) {
            node->keys[i + 1] = node->keys[i];
            node->data[i + 1] = node->data[i];
            i--;
        }
        node->keys[i + 1] = key;
        node->data[i + 1] = strdup(row_data);  // Ensure to copy data
        node->num_keys++;
    } else {
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

// Traverse the tree (for testing purposes)
void traverse(Node* node) {
    if (node == NULL) return;

    for (int i = 0; i < node->num_keys; i++) {
        if (!node->is_leaf) {
            traverse(node->children[i]);
        }
        printf("Key: %d, Data: %s\n", node->keys[i], node->data[i]);
    }

    if (!node->is_leaf) {
        traverse(node->children[node->num_keys]);
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
        for (int i = 0; i < current->num_keys && count < n; i++, count++) {
            printf("Key: %d, Data: %s\n", current->keys[i], current->data[i]);
        }
        current = current->next;
    }
}

// View the last N rows (tail functionality)
void tail(BPlusTree* tree, int n) {
    Node* current = tree->root;
    while (!current->is_leaf) {
        current = current->children[current->num_keys];
    }

    // Count total rows in the leaf nodes
    int total = 0;
    Node* temp = current;
    while (temp) {
        total += temp->num_keys;
        temp = temp->next;
    }

    int skip = total > n ? total - n : 0;
    current = tree->root;
    while (!current->is_leaf) {
        current = current->children[0];
    }

    printf("Last %d rows:\n", n);
    int count = 0;
    while (current) {
        for (int i = 0; i < current->num_keys; i++) {
            if (count >= skip) {
                printf("Key: %d, Data: %s\n", current->keys[i], current->data[i]);
            }
            count++;
        }
        current = current->next;
    }
}

// Load CSV into the B+ tree with a given delimiter and optional header skipping
void load_csv(BPlusTree* tree, const char* filename, const char* delimiter, int skip_header) {
    FILE* file = fopen(filename, "r");
    if (!file) {
        perror("Unable to open file");
        return;
    }

    char line[MAX_LINE_LENGTH];
    int row_index = 0;

    // Skip header if specified (skip_header is 1)
    if (skip_header) {
        if (fgets(line, MAX_LINE_LENGTH, file)) {
            // Skip the first line (header)
            line[strcspn(line, "\n")] = '\0';  // Remove newline character
            printf("Skipped header: %s\n", line); // Debugging header skip
        }
    }

    while (fgets(line, MAX_LINE_LENGTH, file)) {
        line[strcspn(line, "\n")] = '\0';  // Remove newline character
        printf("Read line: %s\n", line);   // Debugging the line read

        // Parse the CSV line using the provided delimiter
        char* token = strtok(line, delimiter);
        char row_data[MAX_DATA_LENGTH] = "";

        // Concatenate all tokens into one row
        while (token != NULL) {
            strcat(row_data, token);
            strcat(row_data, " ");  // Add space between values
            token = strtok(NULL, delimiter);
        }

        // Remove trailing space from row_data
        if (strlen(row_data) > 0 && row_data[strlen(row_data) - 1] == ' ') {
            row_data[strlen(row_data) - 1] = '\0';
        }

        // Debugging output
        printf("Row data: %s\n", row_data);  // Check the data being prepared for insertion

        // Ensure the row data isn't empty before insertion
        if (strlen(row_data) > 0) {
            // Insert data row into the B+ tree
            insert(tree, row_index++, row_data);
        } else {
            printf("Skipping empty line\n");  // Debugging empty line skip
        }
    }

    fclose(file);
}

// Main function
int main() {
    BPlusTree* tree = initialize_tree();

    // Specify the delimiter, e.g., ",", ";", "\t" (tab), or others
    const char* delimiter = ";";  // Change this as per your CSV format

    // Set skip_header to 0 to keep the header or 1 to skip the header
    int skip_header = 1;  // Set to 1 to skip the header row
    load_csv(tree, "data.csv", delimiter, skip_header);

    printf("B+ Tree contents:\n");
    traverse(tree->root);

    printf("\nHead (first 5 rows):\n");
    head(tree, 5);

    printf("\nTail (last 5 rows):\n");
    tail(tree, 5);

    return 0;
}

