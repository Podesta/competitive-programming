#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
int compare(const void *a, const void *b)
{
    int int_a = * ( ( int* ) a );
    int int_b = * ( ( int* ) b );

    if (int_a == int_b) return 0;
    else if (int_a < int_b) return -1;
    else return 1;
}
*/

int main(void)
{
    int n   = 0;    // Size of array
    int min = 0;    // Min sum
    int max = 0;    // Max sum
    int sum = 0;    // How many times the sum was withing spec

    scanf("%d %d %d", &n, &min, &max);
    int arr[n];
    memset(arr, 0, sizeof arr);

    for (int i = 0; i < n; ++i)
        scanf("%d", &arr[i]);

//    qsort(arr, n, sizeof int, compare);

    // Last digit has nothing to compare agains, so n - 1
    for (int i = 0; i < n - 1; ++i)
    {
        for (int j = i + 1; j < n; ++j)
        {
            if ((arr[i] + arr[j] >= min) && arr[i] + arr[j] <= max)
                ++sum;
        }
    }
    printf("%d\n", sum);
    return 0;
}

