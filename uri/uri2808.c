#include <stdio.h>

int main(void) {
    char start[2] = {0};
    char end[2] = {0};

    scanf("%s %s", start, end);
    int startX = start[0] - 'a';
    int startY = start[1] - '0';
    int endX = end[0] - 'a';
    int endY = end[1] - '0';

    if (endX - startX == 2 || endX - startX == -2) // If x moves 2, y has to move 1
    {
        if (endY - startY == 1 || endY - startY == -1)
            printf("VALIDO\n");
        else
            printf("INVALIDO\n");
    }
    else if (endX - startX == 1 || endX - startX == -1)
    {
        if (endY - startY == 2 || endY - startY == -2)
            printf("VALIDO\n");
        else
            printf("VALIDO\n");
    }
    else
        printf("INVALIDO\n");

    return 0;
}
