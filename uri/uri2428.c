#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b)
{
    int int_a = * ( ( int* ) a );
    int int_b = * ( ( int* ) b );

    if (int_a == int_b) return 0;
    else if (int_a < int_b) return -1;
    else return 1;
}

int main(void)
{
    int a[4] = {0};     // Area de cada uma das zonas

    for (int i = 0; i < 4; ++i)
        scanf("%d", &a[i]);

    qsort(a, sizeof (a - 1), sizeof (int), compare);

    // Two ways of doing this
    // Biggest / 2nd biggest == 3rd biggest / smallest
    // Biggest * smallest == 2nd biggest * 3rd biggest
    if (a[0] * a[3] == a[1] * a[2])
        printf("S\n");
    else
        printf("N\n");

    return 0;
}
