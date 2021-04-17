#include <stdio.h>

int main(void)
{
    int n[7] = {0};
    int p = 0;
    for (int i = 0; i < 7; ++i)
    {
        scanf("%d", &n[i]);
        if (n[i] > 0)
            ++p;
    }
    printf("%d valores positivos\n");
    return 0;
}
