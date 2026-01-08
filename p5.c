/*
Program To Demonstrate how to Define Structure ,Declare A variable that Structure Type and Access 
it member to Store and Display Infomation about a Student
*/
#include <stdio.h>
#include <string.h>
struct p5{

    char name[50];
    int roll;
    float marks;
};
int main(){
    struct p5 s1;
    printf("Enter Name :-");
    gets(s1.name);
    printf("Enter Roll Number :-");
    scanf("%d",&s1.roll);
    printf("Enter Marks :-");
    scanf("%f", &s1.marks);
    printf("\n Student Info :- \n Name :- %s \n Roll :- %d \n Marks %.2f \n", s1.name, s1.roll, s1.marks);
    return 0;
}
