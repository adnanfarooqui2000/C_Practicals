// Implementation Circular Queue Using Array.
#include <stdio.h>
#define SIZE 5
int CQ[SIZE], front = -1 , rear = -1;

void Enqueue(int val){
    if((rear+1) % SIZE == front){
        printf("Queue is Full \n");
    }
    else{
        if(front == -1){
            front = 0;
            rear = (rear+1) % SIZE;
            CQ[rear] = val;
        }
    }   
}

void Dequeue(){
    if(front == -1){
        printf("Queue is Empty \n");
    }
    else{
        printf("Dequeue : %d\n",CQ[front]);
        if(front == rear){
            front = rear = -1;
        }
        else{
            front = (front+1) % SIZE;
        }
    }
}

void Display(){
    if(front == -1){
        printf("Queue is Empty");
    }
    else{
        int i = front;
        printf("Queue :");
        while(1){
            printf("%d", CQ[i]);
            if(i == rear){
                break;
                i = (i+1) % SIZE;
            }
            printf("\n");
        }
    }
}

int main(){
    Enqueue(10);
    Enqueue(20);
    Enqueue(30);
    Dequeue();
    Display();
    return 0;
}