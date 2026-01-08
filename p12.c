/*
Design a program to read an input file, calculate the frequency of each words, and 
check wheather each word is already present in an array.
*/ 
#include<stdio.h>
#include<string.h>

int main() {
    FILE *fp = fopen("input.txt", "r");

    if(fp == NULL){
        printf("File not found!");
        return 1;
    }

    char word[50], arr[100][50];
    int count[100] = {0}, n = 0, found;

    while (fscanf(fp, "%s", word) != EOF) {
        found = 0;

        // Check if word already exists
        for (int i = 0; i < n; i++) {
            if (strcmp(arr[i], word) == 0) {
                count[i]++;
                found = 1;
                break;
            }
        }

        // If new word, add to array
        if (!found) {
            strcpy(arr[n], word);
            count[n] = 1;
            n++;
        }
    }

    fclose(fp);

    // Output results
    for (int i = 0; i < n; i++)
        printf("%s : %d\n", arr[i], count[i]);

    return 0;
}
