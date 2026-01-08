#include <stdio.h>
#define Max 5

int Queue[Max];
int front = -1, rear = -1;

int isEmpty() {
    return (front == -1);
}

int isFull() {
    return (rear == Max - 1);
}

void enqueue(int x) {
    if (isFull()) {
        printf("Queue Overflow\n");
        return;
    }

    if (isEmpty()) {
        front = rear = 0;
    } else {
        rear++;
    }

    Queue[rear] = x;
    printf("%d enqueued\n", x);
}

void dequeue() {
    if (isEmpty()) {
        printf("Queue Underflow\n");
        return;
    }

    printf("%d dequeued\n", Queue[front]);
    front++;

    if (front > rear) {
        front = rear = -1;
    }
}

int view() {
    if (isEmpty()) {
        printf("Queue is Empty\n");
        return -1;
    }
    return Queue[front];
}

void show() {
    if (isEmpty()) {
        printf("Queue is Empty\n");
    } else {
        printf("Queue elements: ");
        for (int i = front; i <= rear; i++) {
            printf("%d ", Queue[i]);
        }
        printf("\n");
    }
}

int main() {
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);
    return 0;
}
