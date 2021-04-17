#include <stdio.h>
#include <string.h>

int main(void)
{
    int n = 0;          // Total size of stairs
    int diffNew = 0;    // Size of step
    int diffOld = -1;
    int stairs = 0;     // Amount of stairs
    int size = 0;       // Array size

    scanf("%d", &n);

    int stp[n+1];
    memset(stp, 0, sizeof stp);
    size = (int)(sizeof stp / sizeof stp[0]) - 1;

    for (int i = 0; i < size; ++i)
        scanf("%d", &stp[i]);

    for (int i = 1; i < n; ++i)
    {
        diffNew = stp[i] - stp[i-1];
        if (diffOld != diffNew)
            ++stairs;

        diffOld = diffNew;
    }

    if (n == 1)
        ++stairs;

    printf("%d\n", stairs);
    return 0;
}
