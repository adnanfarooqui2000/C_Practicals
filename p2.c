// Illustrate a program to convert Decimal to Binary.
#include<stdio.h>
int main(){
    int n, bin [32], i = 0;
    printf("Enter a Decimal Number :- ");
    scanf("%d",&n);
    while (n > 0){
        bin [i] = n % 2;
        n /= 2;
        i++;
    }
    printf("Binary :-");
    for(int j = i-1; j >=0; j--){
        printf("%d",bin [j]);
    }
    return 0;
}