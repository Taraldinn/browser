#include <stdio.h>
int main()
{

    float a, r, f1, f2, f3;
    scanf("%f", &a);
    if (a <= 2000.00)
    {
        printf("Isento\n");
    }
    else
    {
        if (a > 2000 && a <= 3000)
        {

            f1 = a - 2000;
            f1 = ((f1 * 8) / 100);
            r = f1;
            printf("R$ %0.2f", r);
        }
        else if (a > 3000 && a <= 4500)
        {

            f1 = a - 2000;
            f2 = f1 - 1000;
            f1 -= f2;
            f1 = ((1000 * 8)/100);
            f2 = ((1500 *18)/100);
            r = f1 + f2;
            printf("R$ %0.2f", r);
        }
        else
        {
            f1 = a - 2000;
            f2 = f1 - 1000;
            f3=f2-1500;
            f1-=f2;
            f2-=f3;
            f1 = ((1000 *8)/100);
            f2 = ((1500 *18)/100);
            f3 = ((f3*28)/100);
            r = f1 + f2 + f3;
            printf("R$ %0.2f", r);
        }
    }

    return 0;
}