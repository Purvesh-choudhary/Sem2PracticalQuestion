#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 10

int queue[MAX_SIZE];
int front = -1;
int rear = -1;

void enqueue(int data) {
    if (rear == MAX_SIZE - 1) {
        printf("Queue overflow\n");
        return;
    }
    if (front == -1) {
        front = 0;
    }
    rear++;
    queue[rear] = data;
}

int dequeue() {
    if (front == -1 || front > rear) {
        printf("Queue underflow\n");
        return -1;
    }
    int data = queue[front];
    front++;
    return data;
}

int is_empty() {
    return front == -1 || front > rear;
}

void traverse() {
    if (is_empty()) {
        printf("Queue is empty\n");
        return;
    }
    for (int i = front; i <= rear; i++) {
        printf("%d ", queue[i]);
    }
    printf("\n");
}

int main() {
    enqueue(1);
    enqueue(2);
    enqueue(3);

    traverse();  // prints 1 2 3

    printf("%d\n", dequeue());  // prints 1
    printf("%d\n", dequeue());  // prints 2

    traverse();  // prints 3

    return 0;
}
