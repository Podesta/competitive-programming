#include <stdio.h>
#include <string.h>

#define MAXPASS 2000
    // while (scanf(" %[^\n]", password[i]) != EOF)

int main(void)
{
    // Set them to 1, because 0 might be EOF
    char password[MAXPASS][50];
    memset(password, 1, sizeof password);

    int size[MAXPASS] = {0};            // Size of each password
    int upper[MAXPASS] = {0};           // Check fo upper characters
    int lower[MAXPASS] = {0};           // Check for lower case characters
    int number[MAXPASS] = {0};          // Check for numbers
    int punctuation[MAXPASS] = {0};     // Check for punctutation
    int passQty = 0;                    // Amount of passwords entered


    for (int i = 0; i<2000; ++i)
    {
        if (scanf (" %[^\n]", password[i]) == EOF)
            break;
        size[i] = strlen(password[i]);
        ++passQty;

        // Check for require 1: uppercase, Lowercase and number
        for (int j = 0; j < size[i]; ++j)
        {
            if (password[i][j] == EOF)
                break;
            else if (password[i][j] >= 'A' && password[i][j] <= 'Z')
                ++upper[i];
            else if (password[i][j] >= 'a' && password[i][j] <= 'z')
                ++lower[i];
            else if (password[i][j] >= '0' && password[i][j] <= '9')
                ++number[i];
            else if (password[i][j] >= ' ' && password[i][j] <= '/')
                ++punctuation[i];
            else if (password[i][j] >= ':' && password[i][j] <= '@')
                ++punctuation[i];
            else if (password[i][j] >= '[' && password[i][j] <= '`')
                ++punctuation[i];
            else if (password[i][j] >= '{' && password[i][j] <= '~')
                ++punctuation[i];
        }
    }

    // Check and print results. Outside of the other loop to get all input
    // and only then print the results
    for (int i = 0; i < passQty; ++i)
    {
        // Check for size
        if (size[i] > 32 || size[i] < 6)
            printf("Senha invalida.\n");

        // Check for punctuation
        else if (punctuation[i] != 0)
            printf("Senha invalida.\n");

        // Check for the requirements.
        else if (upper[i] != 0 && lower[i] != 0 && number[i] != 0)
            printf("Senha valida.\n");

        else 
            printf("Senha invalida.\n");
    }
    return 0;
}
