#include <stdio.h>
#include <string.h>

int main(void)
{
    int n   = 0;
    int in  = 0;
    int out = 0;
    scanf("%d", &n);

    int number[n+1];
    memset(number, 0, sizeof number);

    for (int i = 0; i < number; ++i)
    {
        scanf("%d", &number[i]);
        if (number[i] <= 20 && number[i] >= 10)
            ++in;
        else
            ++out;
    }
    printf("%d in\n%d out\n", in, out);
    return 0;
}
