#include <stdio.h>

int main(void)
{
    int x, y, smaller, bigger, sum;
    sum = 0;

    scanf("%d %d", &x, &y);

    if (x < y)
    {
        smaller = x;
        bigger = y;
    }
    else
    {
        smaller = y;
        bigger = x;
    }

    for (int i = smaller; i < bigger; ++i)
        if (i % 2 != 0)
            sum += i;
    printf("%d\n", sum);
    return 0;
}
