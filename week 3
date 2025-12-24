#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

// 2. Traversal
void traverse(struct Node* head) {
    struct Node* temp = head;
    printf("List: ");
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

// 3. Insertion
struct Node* insertFront(struct Node* head, int value) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next = head;
    return newNode; // New node is now the head
}

// 4. Insertion: End
void insertEnd(struct Node* head, int value) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next = NULL;
    
    struct Node* temp = head;
    while (temp->next != NULL) temp = temp->next;
    temp->next = newNode;
}

// 5. Deletion
struct Node* deleteNode(struct Node* head, int key) {
    struct Node *temp = head, *prev = NULL;
    
    if (temp != NULL && temp->data == key) {
        head = temp->next;
        free(temp);
        return head;
    }
    
    while (temp != NULL && temp->data != key) {
        prev = temp;
        temp = temp->next;
    }
    
    if (temp == NULL) return head;
    
    prev->next = temp->next;
    free(temp);
    return head;
}

int main() {
    struct Node* head = NULL;

    // Creating initial list
    head = insertFront(head, 10);
    head = insertFront(head, 20);
    insertEnd(head, 5);
    
    traverse(head); // Output: 20 -> 10 -> 5 -> NULL
    
    return 0;
}
