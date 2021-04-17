#include <stdio.h>

int main(void)
{
    double wage = 0;
    double tax  = 0;
    double diff = 0;

    scanf("%lf", &wage);

    if (wage < 2000)
        printf("Isento\n");

    if (wage > 4500)
    {
        diff = wage - 4500;
        tax = diff * 0.28;
        wage -= diff;
    }

    if (wage > 3000)
    {
        diff = wage - 3000;
        tax += diff * 0.18;
        wage -= diff;
    }

    if (wage > 2000)
    {
        diff = wage - 2000;
        tax += diff * 0.08;
        wage -= diff;
    }

    printf("R$ %.2lf\n", tax);
    return 0;
}
