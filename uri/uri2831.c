#include <stdio.h>
#include <string.h>

int main(void)
{
    int nBox = 0;   // Amount of boxes
    
    scanf("%d", &nBox);
    int box[nBox];
    memset(box, 0, sizeof box);

    for (int i = 0; i < nBox; ++i)
        scanf("%d", &box[i]);

    // First one has to be smaller than 8
    if (box[0] > 8)
    {
        printf("N\n");
        return 0;
    }

    for (int i = 1; i < nBox; ++i)
    {
        if (box[i] - box[i-1] > 8)
        {
            printf("N\n");
            return 0;
        }
    }
    printf("S\n");
    return 0;
}
