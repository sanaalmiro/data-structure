// Example: Interleaving two Singly/Doubly lists
void interleave(struct Node* p, struct Node* q) {
    struct Node *p_next, *q_next;
    while (p != NULL && q != NULL) {
        p_next = p->next;
        q_next = q->next;

        q->next = p_next; 
        p->next = q; 

        p = p_next;
        q = q_next;
    }
}
