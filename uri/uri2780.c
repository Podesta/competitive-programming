#include <stdio.h>

int main(void)
{
    int d = 0;
    scanf("%d", &d);
    if (d <= 800)
        printf("1\n");
    else if (d > 1400)
        printf("3\n");
    else
        printf("2\n");
    return 0;
}
