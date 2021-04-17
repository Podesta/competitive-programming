#include <stdio.h>

int main(void)
{
    int l0 = 0;     // Largura
    int c0 = 0;     // Comprimento
    int l1 = 0;     // Lajota 1
    int l2 = 0;     // Lajota 2

    scanf("%d %d", &l0, &c0);

    l1 = (l * c) + ((l - 1) * (c - 1));
    l2 = (2 * (l - 1)) + (2 * (c - 1));

    printf("%d\n%d\n", l1, l2);
    return 0;
}
