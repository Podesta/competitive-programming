#include <stdio.h>

int main(void)
{
    int lim = 0;
    int n = 0;

    scanf("%d", &lim);

    for (int i = 0; i < lim; ++i)
    {
        n = 0;
        int prime = 0;

        scanf("%d", &n);
        for (int j = 1; j <= n; ++j)
            if (n % j == 0)
                ++prime;
        if (prime > 1)
            printf("%d nao eh primo\n", n);
        else
            printf("%d eh primo\n", n);
    }
    return 0;
}
