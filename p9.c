// Program to Demonstrate how to implement a Linked list using arrays in C.
#include <stdio.h>
#define SIZE 10
struct p9
{
    int data;
    int next;
};

struct p9 list[SIZE];
int head = 1 , freeIndex = 0;

int getp9(int val){
    if(freeIndex >= SIZE) return -1;
    list[freeIndex].data = val;
    list[freeIndex].next =-1;
    return freeIndex++;
}

void insert(int val){
    int newp9 = getp9(val);
    if(newp9 == 1){
        printf("NO SPACE \n");
        return;
    }
    list [newp9].next = head;
    head = newp9 ;
}

void display(){
    int temp = head ;
    while (temp != -1){
        printf("%d ->", list[temp].data);
        temp = list[temp].next ;
    }
    printf("Null\n");
}

int main(){
    insert(10);
    insert(20);
    insert(30);
    display();
    return 0;
}