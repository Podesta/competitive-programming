#include <stdio.h>

int main(void)
{
    double x, y;
    scanf("%lf %lf", &x, &y);

    if (x == 0 && y == 0)
        printf("Origem\n");
    else if (y == 0)
        printf("Eixo X\n");
    else if (x == 0)
        printf("Eixo Y\n");

    return 0;
}
