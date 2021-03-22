#include <stdio.h>
int main (){
    int i,n=0,a;
    
    for ( i = 0; i < 5; i++)
    {
        scanf("%d",&a);
        if (a%2 == 0)n++;

        
    }
    printf("%d valores pares\n",n);

    return 0;
}
