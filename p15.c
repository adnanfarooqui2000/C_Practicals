#include <stdio.h>
#define SIZE 5

int cq[SIZE];
int front = -1, rear = -1;

void insert(int x) {
    if ((rear + 1) % SIZE == front) {
        printf("Queue Overflow\n");
        return;
    }

    if (front == -1) {
        front = rear = 0;
    } else {
        rear = (rear + 1) % SIZE;
    }

    cq[rear] = x;
}

void delete() {
    if (front == -1) {
        printf("Queue Underflow\n");
        return;
    }

    if (front == rear) {
        front = rear = -1;
    } else {
        front = (front + 1) % SIZE;
    }
}

void display() {
    int i = front;
    if (front == -1) {
        printf("Queue is Empty\n");
        return;
    }

    printf("Queue Elements: ");
    while (1) {
        printf("%d ", cq[i]);
        if (i == rear)
            break;
        i = (i + 1) % SIZE;
    }
    printf("\n");
}

int main() {
    insert(10);
    insert(20);
    insert(30);
    insert(40);
    delete();
    delete();
    insert(50);
    insert(60);
    insert(70);   // No Overflow
    display();
    return 0;
}
