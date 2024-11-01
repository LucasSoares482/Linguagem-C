#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

void initialize(struct Node** head_ref) {
    *head_ref = NULL;
}

int main() {
    struct Node *head;    // Ponteiro para estrutura Node
    initialize(&head);

    printf("Ponteiro: %p\n", head);
    
    
}