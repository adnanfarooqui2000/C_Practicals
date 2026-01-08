/*
Write A Program To Reads String/Line of Text And Dispaly The String 
With Each Pair of adjaent Letters Reverse in Individual words
 */ 
#include <stdio.h>
#include <string.h>
int main(){
 char str[100];
 printf("Enter a String :- ");
 gets(str);
 for(int i = 0 ; i < strlen(str) ; i+=2){
    if(str[i+1] != '\0'){
        char temp = str[i];
        str[i] = str[i+1];
        str[i+1] = temp;
    }
 }
 printf("Modified String :- %s\n" , str);
 return 0;
}