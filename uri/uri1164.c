#include <stdio.h>
#include <string.h>
#include <math.h>

int main(void)
{
    int max = 0;
    scanf("%d", &max);

    int num[max+1];
    memset(num, 0, sizeof num);

    int sum;        // Sum of divisors

    for (int i = 0; i < max; ++i)
    {
        scanf("%d", &num[i]);
        sum = 0;

        // Find out the divisors. Stops when we reach half the number.
        // Using floor because contest uses version prior to C99.
        // Can't divide by 0, so j starts at 1.
        for (int j = 1; j <= floor(num[i]/2); ++j)
            if (num[i] % j == 0)
                sum += j;

        if (sum == num[i])
            printf("%d eh perfeito\n", num[i]);
        else
            printf("%d nao eh perfeito\n", num[i]);
        printf("%d\n", sum);
    }
    return 0;
}
