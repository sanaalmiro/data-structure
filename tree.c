#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Structure for a Tree Node
typedef struct Node {
    char data[10];
    struct Node *left;
    struct Node *right;
} Node;

// Helper function to create a new node
Node* createNode(char* value) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    strcpy(newNode->data, value);
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

// Simple Pre-order Traversal to verify the tree
void printTree(Node* root, int space) {
    if (root == NULL) return;
    space += 5;
    printTree(root->right, space);
    printf("\n");
    for (int i = 5; i < space; i++) printf(" ");
    printf("%s\n", root->data);
    printTree(root->left, space);
}

int main() {
    // Manually building the AST for: a = b + c * 2
    
    // Root Level
    Node* root = createNode("=");
    
    // Level 1
    root->left = createNode("a");
    root->right = createNode("+");
    
    // Level 2
    root->right->left = createNode("b");
    root->right->right = createNode("*");
    
    // Level 3
    root->right->right->left = createNode("c");
    root->right->right->right = createNode("2");

    printf("Abstract Syntax Tree (AST) Structure:\n");
    printTree(root, 0);

    return 0;
}
