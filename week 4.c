void insertEnd(struct Node** head, int newData) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    struct Node* last = *head;

    newNode->data = newData;
    newNode->next = NULL; // It will be the new last node

    if (*head == NULL) { // If list is empty
        newNode->prev = NULL;
        *head = newNode;
        return;
    }

    while (last->next != NULL) last = last->next; // Traverse to end

    last->next = newNode;
    newNode->prev = last;
}

void deleteAllNodes(struct Node* head) {
    if (head == NULL) return; // Base case

    deleteAllNodes(head->next); // Recursive step: go to the end
    
    printf("Deleting node with data: %d\n", head->data);
    free(head); // Free the current node as the stack unwinds
}

void insertAfter(struct Node* prevNode, int newData) {
    if (prevNode == NULL) return;

    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = newData;

    // Set new node's pointers
    newNode->next = prevNode->next;
    newNode->prev = prevNode;

    // Link previous node to new node
    prevNode->next = newNode;

    // Link the following node back to the new node
    if (newNode->next != NULL) {
        newNode->next->prev = newNode;
    }
}

