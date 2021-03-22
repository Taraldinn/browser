#include <stdio.h>
int main(){

   int n,i,j;
   scanf("%d",&n);
   for ( i = n; i >= 0 ; i-=2)
   {
     for ( j=1; j  n-i; j++)
     {
              printf(" ");
     }
     for (j=1; j <= i+1; j++)
     {
              printf("* ");
     }
      printf("\n");
     
     
   }
   

  return 0;
          }