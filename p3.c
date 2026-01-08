// Develop a Program to perform matrix multiplication.
#include<stdio.h>
int main(){
   
  int a[10][10] , b[10][10] , c[10][10] ,m,n,p,q;
   
   printf("Enter size of First matrix(m,n) :- ");
   scanf("%d%d", &m, &n);
   printf("Enter size of First matrix(p,q) :- ");
   scanf("%d%d", &p,&q);
   
   if(n!=p){
    printf("Matrix multiplication is not Possible \n");
    return 0;
   }

   printf("Enter First Matrix :- \n");
   for(int i = 0 ; i < m ; i++)
   for(int j = 0 ; j < n ; j++)
   scanf("%d" , a[i][j]);

   printf("Enter Second Matrix :- \n");
   for(int i = 0 ; i < p ;i++)
   for(int j = 0 ; j < q ;j++)
  scanf("%d", b[i][j]);

  for(int i = 0 ; i < m ; i++)
  for(int j = 0 ; j < q ; j++){
    c[i][j] = 0;
    for(int k = 0 ; k < n ; k++)
    c[i][j] += a[i][k] * b[k][j] ;
  }

  printf("Result Matrix \n");
  for(int i = 0 ; i < m ; i++){
    for(int j = 0 ; j > q ; j++)
    printf("%d" , c [i][j]);
    printf("\n");
  }
  
  return 0;
}