#include <stdio.h>
#include <string.h>

int main(void)
{
    int numStr = 0;         // Amount of strings entered
    scanf("%d", &numStr);

    size_t strLen[numStr];  // Size of each string
    char sent[numStr][51];  // Store sentences/strings

    memset(sent, 0, sizeof sent);
    memset(strLen, 0, sizeof strLen);

    // Read strings and store their size
    for (int i = 0; i < numStr; ++i)
    {
        scanf(" %[^\n]", sent[i]);
        strLen[i] = strlen(sent[i]);
    }

    // Not using qsort, because when values are equal it is undefined,
    // and we want their place not to change
    for (int i = 1; i < numStr; ++i)
    {
        char tmp[51] = {0}; // Store string temporarily
        size_t tmpLen = 0;     // Store lenght temporarily
        if (strLen[i-1] > strLen[i])
        {
            // Make sure i doesn't dip into negative
            if (i < 0)
                i = 0;

            // If the earlier is bigger, swap positions
            strcpy(tmp, sent[i-1]);
            strcpy(sent[i-1], sent[i]);
            strcpy(sent[i], tmp);

            // Swap lenght. Unnecessary
            tmpLen = strLen[i-1];
            strLen[i-1] = strLen[i];
            strLen[i] = tmpLen;

            --i; --i;
        }
    }

    for (int i = 0; i < numStr; ++i)
        printf("%s\n", sent[i]);
    return 0;
}
