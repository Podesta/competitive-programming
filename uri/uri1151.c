#include <stdio.h>

int main(void)
{
    int max = 0;
    scanf("%d", &max);

    // One extra space for the terminator
    int fibo[47] = {0, 1};

    for (int i = 0; i < max; ++i)
    {
        // The first two digits go as normal
        if (i < 2)
            printf("%d ", fibo[i]);
        else
        {
            fibo[i] = fibo[i-2] + fibo[i-1];
            printf("%d ", fibo[i]);
        }
    }
    printf("\n");
    return 0;
}
