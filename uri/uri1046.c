#include <stdio.h>

int main(void)
{
    int start, end, total;
    scanf("%d %d", &start, &end);

    // Min duration is 1 hour, and max is 24
    if (start == end)
    {
        total = 24;
        printf("O JOGO DUROU %d HORA(S)\n", total);
    }
    else if (start == 23 && end == 0)
    {
        total = 1;
        printf("O JOGO DUROU %d HORA(S)\n", total);
    }
    else if (end < start)
    {
        total = 24 + end - start;
        printf("O JOGO DUROU %d HORA(S)\n", total);
    }
    else if (end > start)
    {
        total = end - start;
        printf("O JOGO DUROU %d HORA(S)\n", total)
    }
    return 0;
}
