#include <stdio.h>

#define MAX_SIZE 100

struct Stack {
    int top;
    int arr[MAX_SIZE];
};

void push(struct Stack* s, int x) {
    if (s->top == MAX_SIZE - 1) {
        printf("Stack Overflow\n");
        return;
    }
    s->arr[++s->top] = x;
}

int pop(struct Stack* s) {
    if (s->top == -1) {
        printf("Stack Underflow\n");
        return -1;
    }
    return s->arr[s->top--];
}

int is_empty(struct Stack* s) {
    return s->top == -1;
}

void traverse(struct Stack* s) {
    if (is_empty(s)) {
        printf("Stack is empty\n");
        return;
    }
    for (int i = s->top; i >= 0; i--)
        printf("%d ", s->arr[i]);
    printf("\n");
}

int main() {
    struct Stack s = { .top = -1 };

    push(&s, 1);
    push(&s, 2);
    push(&s, 3);

    traverse(&s);  // prints 3 2 1

    printf("%d\n", pop(&s));  // prints 3
    printf("%d\n", pop(&s));  // prints 2

    traverse(&s);  // prints 1

    return 0;
}
