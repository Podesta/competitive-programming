#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    char sentence[55] = {0};

    //int numTest = 0;    // Amount of test cases entered
    
    // Get all input, including leading spaces. Quit at EOF.
    // The %*c is to flush the trailing new line from next input
    while (scanf("%[^\n]%*c", sentence) != EOF)
    {
     //   ++numTest;
        int counter = 0;    // Keep track of actual letters
        for (size_t i = 0; i < strlen(sentence); ++i)
        {
            if (isalpha(sentence[i]))
            {
                if (counter % 2 == 0)
                    sentence[i] = toupper(sentence[i]);
                else if (counter % 2 == 1)
                    sentence[i] = tolower(sentence[i]);
                ++counter;
            }
        }
        printf("%s\n", sentence[i]);
    }
    return 0;
}
