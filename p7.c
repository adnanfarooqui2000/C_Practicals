/*
Users examine the Program's Logic For Verifying Weather The Stack is Empty and understand the Conditions 
and Steps involved in Performing Push and Pop Operations
*/
#include <stdio.h>
#define MAX 5
int Stack[MAX], top = -1;
void Push(val_1){
    if(top == MAX-1){
        printf("Stack OverFlow \n");
    }
    else{
        Stack[++top] = val_1;
    }
}
void Pop(){
    if(top == -1){
        printf("Stack UnderFlow \n");
    }
    else{
        printf("Popped :- %d\n", Stack[top--]);
    }
}
void Display(){
    if(top == -1){
        printf("Stack is Empty \n");
    }
    else{
        printf("Stack :");
        for(int i = top; i>= 0; i--){
            printf("%d",Stack[i]);
            printf("\n");
        }
    }
}
int main(){
    Push(10);
    Push(20);
    Pop();
    Display();
    return 0;
}
