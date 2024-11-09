#include <stdio.h>
#include <stdlib.h>

// Estrutura do nó da pilha
struct Node {
    int data;
    struct Node* next;
};

// Inicializa a pilha
void initialize(struct Node** top_ref) {
    *top_ref = NULL;
}

// Função push - insere elemento no topo
void push(struct Node** top_ref, int new_data) {
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
    
    if (!new_node) {
        printf("Erro: Memória insuficiente.\n");
        return;
    }
    
    new_node->data = new_data;
    new_node->next = *top_ref;
    *top_ref = new_node;
}

// Função pop - remove e retorna elemento do topo
int pop(struct Node** top_ref) {
    if (*top_ref == NULL) {
        printf("Erro: Pilha vazia.\n");
        return -1;
    }
    
    struct Node* temp = *top_ref;
    int popped_data = temp->data;
    *top_ref = temp->next;
    free(temp);
    
    return popped_data;
}

// Função que retorna o tamanho da pilha
int getSize(struct Node* top) {
    int size = 0;
    struct Node* temp = top;
    while (temp != NULL) {
        size++;
        temp = temp->next;
    }
    return size;
}

// Função para reverter a pilha usando pilha auxiliar
void reverseStackUsingAuxStack(struct Node** top_ref) {
    // Cria pilha auxiliar
    struct Node* aux_stack = NULL;
    
    // Obtém o tamanho da pilha original
    int size = getSize(*top_ref);
    
    // Para cada posição da pilha original
    for (int i = 0; i < size; i++) {
        // Remove o elemento do topo
        int current = pop(top_ref);
        
        // Move elementos da pilha auxiliar de volta para a original
        for (int j = 0; j < size - i - 1; j++) {
            push(&aux_stack, pop(top_ref));
        }
        
        // Insere o elemento atual na posição correta
        push(top_ref, current);
        
        // Devolve os elementos da pilha auxiliar para a original
        while (aux_stack != NULL) {
            push(top_ref, pop(&aux_stack));
        }
    }
}

// Função para exibir a pilha
void printStack(struct Node* top) {
    if (top == NULL) {
        printf("Pilha vazia\n");
        return;
    }
    
    printf("Pilha: ");
    struct Node* temp = top;
    while (temp != NULL) {
        printf("%d", temp->data);
        if (temp->next != NULL) {
            printf(" -> ");
        }
        temp = temp->next;
    }
    printf("\n");
}

// Função para liberar a memória
void freeStack(struct Node** top_ref) {
    struct Node* current = *top_ref;
    struct Node* next;
    
    while (current != NULL) {
        next = current->next;
        free(current);
        current = next;
    }
    
    *top_ref = NULL;
}

int main() {
    struct Node* pilha = NULL;
    initialize(&pilha);
    
    // Inserindo elementos na pilha
    push(&pilha, 1);  // base
    push(&pilha, 2);
    push(&pilha, 3);
    push(&pilha, 4);  // topo
    
    printf("Pilha original:\n");
    printStack(pilha);
    
    // Revertendo a pilha
    reverseStackUsingAuxStack(&pilha);
    
    printf("\nPilha após reversão:\n");
    printStack(pilha);
    
    // Liberando a memória
    freeStack(&pilha);
    
    return 0;
}