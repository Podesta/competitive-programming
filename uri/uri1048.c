#include <stdio.h>

int main(void)
{
    double oldWage, newWage;
    scanf("%lf", &oldWage);

    if (oldWage <= 400)
        newWage = oldWage * 1.15;
    else if (oldWage > 400 && oldWage <= 800)
        newWage = oldWage * 1.12;
    else if (oldWage > 800 && oldWage <= 1200)
        newWage = oldWage *1.1;
    else if (oldWage > 1200 && oldWage <= 2000)
        newWage = oldWage * 1.07;
    else if (oldWage > 2000)
        newWage = oldWage * 1.04;

    printf("Novo salario: %.2lf\n", newWage);
    printf("Reajuste ganho: %.2lf\n", newWage - oldWage);
    printf("Em percentual: %.0lf \%\n", ((newWage / oldWage) * 100) - 100);

    return 0;
}
