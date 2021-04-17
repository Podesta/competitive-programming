#include <stdio.h>
#include <string.h>

int main(void)
{
    char letter;                // Letter to check for
    char sentence[1001] = {0};  // Sentence entered
    int  words          =  0;   // Count the words
    int  check          =  0;   // Check if the word has the letter
    int  wordLet        =  0;   // Store the amount of words with the letter 
    double percent      =  0;   // Percentage of words with the letter

    // Get input
    scanf("%c %[^\n]", &letter, sentence);
    //scanf(" %[^\n]", sentence);

    size_t sentSize = strlen(sentence);

    // Count words and split them
    for (size_t i = 0; i < sentSize; ++i)
    {
        // Check for the character
        if (sentence[i] == letter)
            ++check;
            
        // The word ends at the space, and the last word at null
        if (sentence[i] == ' ' || sentence[i+1] == '\0')
        {
            ++words;

            // Check if the word has the letter, and reset the check value
            if (check != 0)
                ++wordLet;

            check = 0;
        }
    }
    
    percent = (double)wordLet / (double)words * 100;
    printf("%.2lf\n", percent);
    printf("%d %d %ld\n", wordLet, words, sentSize);

    return 0;
}
