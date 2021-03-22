#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter numbers\n");
    scanf("%d%d%d", &a, &b, &c);
    if ((a >= b) && (a >= c))
    {
        if (b >= c)
        {
            printf("\n Descending order : %d %d %d", a, b, c);
            printf("\n The greatest number : %d", a);
        }
        else
        {
            printf("\n Descending order : %d %d %d", a, c, b);
            printf("\n The greatest number : %d", a);

        }
    }
    else if ((b >= a) && (b >= c))
    {
        if (a >= c)
        {
            printf("\n Descending order : %d %d %d", b, a, c);
            printf("\n The greatest number : %d", b);

        }
        else
        {
            printf("\n Descending order : %d %d %d", b, c, a);
            printf("\n The greatest number : %d", b);

        }
    }
    else if ((c >= a) && (c >= b))
    {
        if (a >= b)
        {
            printf("\n Descending order : %d %d %d", c, a, b);
            printf("\n The greatest number : %d", c);

        }
        else
        {
            printf("\n Descending order : %d %d %d", c, b, a);
            printf("\n The greatest number : %d", c);

        }
    }
            return 0;

}