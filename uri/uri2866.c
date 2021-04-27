#include <stdio.h>
#include <string.h>

const int LIMIT = 200;

int main(void)
{
    int rep = 0;        // Test cases
    size_t size = 0;    // Size of coded message
    scanf("%d", &rep);

    char code[rep][LIMIT];
    memset(code, 0, sizeof code);   // Coded message

    for (int i = 0; i < rep; ++i)
    {
        // Get coded message
        scanf("%s", code[i]);

        size = strlen(code[i]);

        // Decodify and print asnwer
        for (int j = (int)size; j >= 0; --j)
        {
            // Could also be done with ctype islower
            if (code[i][j] >= 'a' && code[i][j] <= 'z')
                printf("%c", code[i][j]);
        }
        printf("\n");
    }
    return 0;
}
