#include <stdio.h>

int main(void)
{
    int n[20] = {0};
    int troca = 19;
    int temp  = 0;

    for (int i = 0; i < 20; ++i)
        scanf("%d", &n[i]);

    for (int i = 0; i < 10; ++i)
    {
        temp = n[i];
        n[i] = n[troca];
        n[troca] = temp;
        --troca;
    }

    for (int i = 0; i < 20; ++i)
        printf("N[%d] = %d\n", i, n[i]);

    return 0;
}
