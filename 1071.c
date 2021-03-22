#include <stdio.h>
int main(){


   int X,Y,i,N=0;
    scanf("%d%d",&X,&Y);
    for ( i = Y+1; i <X ; i++)
    {
        if (i%2 !=0)
        {
            N+=i;

        }
    }
    
    printf("%d\n",N);



return 0;
}