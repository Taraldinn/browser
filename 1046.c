#include <stdio.h>
int main()
{
    int st, ft;
    scanf("%d%d", &st, &ft);
    if (st > ft)
    {
        printf("O JOGO DUROU %d HORA(S)\n", 24 + ft - st);
    }
    else if (st == ft)
    {
        printf("O JOGO DUROU 24 HORA(S)\n");
    }
    else
    {
        printf("O JOGO DUROU %d HORA(S)\n", ft - st);
    }

    return 0;
}