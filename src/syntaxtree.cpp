#include<bits/stdc++.h>
#include <cstdarg>


typedef struct Node {
    char *label;
    struct Node **children; // an array of child node pointers
    int child_count;        // number of children (number of elements in the RHS of the production rule)
} Node;

Node* createNaryNode(char *label, int child_count, ...) {
    Node *newNode = (Node *)malloc(sizeof(Node));
    newNode->label = strdup(label);
    newNode->child_count = child_count;
    newNode->children = (Node **)malloc(child_count * sizeof(Node *));
    
    va_list args;
    va_start(args, child_count);
    for (int i = 0; i < child_count; i++) {
        newNode->children[i] = va_arg(args, Node *);
    }
    va_end(args);
    return newNode;
}

void printNaryTree(Node *root, int depth) {
    if (!root) return;
    for (int i = 0; i < depth; i++) printf("  ");
    printf("%s\n", root->label);
    for (int i = 0; i < root->child_count; i++) {
        printNaryTree(root->children[i], depth + 1);
    }
}

void generateNaryDOT(Node *root, FILE *out) {
    static int id = 0;
    if (!root) return;
    int currentID = id++;
    fprintf(out, "  n%d [label=\"%s\"];\n", currentID, root->label);
    for (int i = 0; i < root->child_count; i++) {
        int childID = id;
        generateNaryDOT(root->children[i], out);
        fprintf(out, "  n%d -> n%d;\n", currentID, childID);
    }
}


