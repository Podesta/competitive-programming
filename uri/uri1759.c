#include <stdio.h>

int main(void)
{
    int n = 0;  // Repetitions
    scanf("%d", &n);

    for (int i = 0; i < n; ++i)
    {
        if (i < n - 1)
            printf("Ho ");
        else if (i == n - 1)
            printf("Ho!\n");
    }
    return 0;
}
