#include <stdio.h>
#include <string.h>

int main(void)
{
    int n = 0;

    scanf("%d", &n);

    for (int i = 0; i < n; ++i)
    {
        char string1[51] = {0};
        char string2[51] = {0};
        int size1 = 0;
        int size2 = 0;

        // Get strings and size
        scanf(" %s %s", string1, string2);
        size1 = (int)strlen(string1);
        size2 = (int)strlen(string2);

        // Check for smaller and start printing
        if (size1 <= size2)
        {
            for (int j = 0; j < size1; ++j)
                printf("%c%c", string1[j], string2[j]);

            for (int j = size1; j < size2; ++j)
                printf("%c", string2[j]);
        }
        else if (size2 < size1)
        {
            for (int j = 0; j < size2; ++j)
                printf("%c%c", string1[j], string2[j]);

            for (int j = size2; j < size1; ++j)
                printf("%c", string1[j]);
        }
        
        printf("\n");
    }
    return 0;
}
