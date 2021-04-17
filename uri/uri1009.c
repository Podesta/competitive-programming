#include <stdio.h>

int main(void)
{
    char name[];
    double wage, sales, total;
    scanf("%s %lf %lf", name, &wage, &sales);
    total = wage + 0.15 * sales;
    printf("TOTAL = R$ %.2lf\n", total);
    return 0;
}
