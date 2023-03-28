#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

void push(struct Node** head, int data) {
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
    new_node->data = data;
    new_node->next = *head;
    *head = new_node;
}

int pop(struct Node** head) {
    if (*head == NULL) {
        printf("Stack underflow\n");
        return -1;
    }
    int data = (*head)->data;
    struct Node* temp = *head;
    *head = (*head)->next;
    free(temp);
    return data;
}

int is_empty(struct Node* head) {
    return head == NULL;
}

void traverse(struct Node* head) {
    if (head == NULL) {
        printf("Stack is empty\n");
        return;
    }
    struct Node* current = head;
    while (current != NULL) {
        printf("%d ", current->data);
        current = current->next;
    }
    printf("\n");
}

int main() {
    struct Node* head = NULL;

    push(&head, 1);
    push(&head, 2);
    push(&head, 3);

    traverse(head);  // prints 3 2 1

    printf("%d\n", pop(&head));  // prints 3
    printf("%d\n", pop(&head));  // prints 2

    traverse(head);  // prints 1

    return 0;
}