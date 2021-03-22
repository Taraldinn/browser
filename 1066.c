#include <stdio.h>
int main(){

   int i,even=0,odd=0,positive=0,nagative=0,X;
   for ( i = 0; i < 5; i++)
   {   
       scanf("%d",&X);
       if (X%2==0)even++;
       else odd++;
       if(X>0)positive++;
       else if(X<0)nagative++; 
       
       
   }   
       printf("%d valor(es) par(es)\n",even);
       printf("%d valor(es) impar(es)\n",odd);
       printf("%d valor(es) positivo(s)\n",positive);
       printf("%d valor(es) negativo(s)\n",nagative);
       return 0;
        }
        