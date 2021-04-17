#include <stdio.h>

int main(void)
{
    int n1, n2;
    do
    {
        scanf("%d %d", &n1, &n2);
        if (n1 < n2)
            printf("Decrescente\n");
        if (n1 > n2)
            printf("Crescente\n");
    }
    while (n1 != n2);

    return 0;
}
