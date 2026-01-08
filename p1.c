// Execute a program to find the roots of Quadratic Equation.
#include <stdio.h>
#include <math.h>
int main(){

float a,b,c,d,r1,r2;

printf("\n Enter coficient a,b & c :- \n");
scanf("%f%f%f",&a,&b,&c);

d = b*b-4*a*c;
if(d>0){
    r1 = (-b +sqrt(d))/(2*a);
    r2 = (-b +sqrt(d))/(2*a);
    printf("Roots are Real :- %2f\n",r1,r2);
}

else if (d==0){
    r1 = -b /(2*a);
    printf("Roots are Equal :- %2f\n",r1);
}

else{
    printf("Roots are Imagenary.\n");
}
return 0;

}