/*
Design & Implement a program that Dynamically Allocates memory for an integer array
using malloc() and allow the user to Enter n integer into the allocated memory. now
display the Array Element   
*/ 
#include<stdio.h>
#include<stdlib.h>

int main() {
    int *arr, n;

    printf("Enter Number Of Elements :- ");
    scanf("%d", &n);

    arr = (int*)malloc(n * sizeof(int));  

    if(arr == NULL){
        printf("Memory not allocated!");
        return 1;
    }

    printf("Enter %d elements:\n", n);
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Array: ");
    for(int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    free(arr);
    return 0;
}
