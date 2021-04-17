#include <stdio.h>
#include <string.h>

int main(void)
{
    char tweet[501];
    int tweetSize = 0;
    memset(tweet, 0, sizeof tweet);

    scanf("%[^\n]s", tweet);
    tweetSize = strlen(tweet);
    printf("Sizeof: %ld\nStrlen: %d\n", sizeof tweet, tweetSize);
    if (tweetSize <= 140)
        printf("TWEET\n");
    else if (tweetSize > 140)
        printf("MUTE\n");
    return 0;
}

            // while (scanf(" %[^\n]", password[i]) != EOF)

