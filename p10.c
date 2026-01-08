/*
Dispaly and Implement a program to create a singly Linked List which can Perform 
the following Functionalities :
1) insert a new node at the beginning of the List.
2) Delete a node from a user-specificed position in the list.
3) Display the current Element of the Linked List. 
*/ 
#include <stdio.h>
#include <stdlib.h>
struct p10{
    int data;
    struct p10* next;
};

struct p10* head = NULL;

void insert_At_Beginning(int val){
    struct p10* newNode=malloc(sizeof(struct p10));
    newNode -> data = val ;
    newNode -> next = head;
    head = newNode ; 
}

void delete_At_Position(int pos){
    if(head ==NULL)return;
    struct p10* temp=head;
    if(pos == 0){
        head = head -> next;
        free(temp);
        return ;
    }

    for(int i = 0 ; temp != NULL && i < pos-1 ; i++)temp = temp -> next ;
    if(temp == NULL || temp -> next == NULL) return;
    struct p10* next = temp -> next -> next ;
    free (temp -> next);
    temp -> next = next ;
}

void display(){
    struct p10* temp = head;
    while(temp){
        printf("%d ->", temp -> data);
        temp = temp -> next;
    }
    printf("NULL\n");
}

int main(){
    insert_At_Beginning(10);
    insert_At_Beginning(20);
    insert_At_Beginning(30);
    display();
    delete_At_Position(1);
    display();
    return 0;
}