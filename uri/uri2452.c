#include <stdio.h>
#include <string.h>

int main(void)
{
    int fita     = 0;
    int reagente = 0;
    scanf("%d %d", &fita, &reagente);

    // Reagente, plus 1 for null
    int locReag[reagente + 1];
    memset(locReag, 0, sizeof locReag);

    // Get the reagente locations
    for (int i = 0; i < reagente; ++i)
        scanf("%d", &locReag[i]);

    // All that matters is the longest stretch. 3 options only
    // Beginning to the first. Last one to the end.
    // Or between two of them, divided by two, rounded up
    int bDay;   // Days until the first drop
    int eDay;   // Days from last drop to the end
    int mDay;   // Longest stretch in between drops

    bDay = locReag[0] - 1;
    eDay = fita - locReag[reagente - 1];
    mDay = 0;
    
    for (int i = 1; i < reagente; ++i)
    {
        int temp = locReag[i] - locReag[i - 1] - 1;
        if (temp > mDay)
            mDay = temp;
    }

    // Divide and round up mDay
    mDay = (mDay + (2 - 1)) / 2;

    // Check who is bigger and print
    if ((bDay >= eDay) && (bDay >= mDay))
        printf("%d\n", bDay);
    else if ((eDay >= bDay) && (eDay >= mDay))
        printf("%d\n", eDay);
    else if ((mDay >= bDay) && (mDay >= eDay))
        printf("%d\n", mDay);

    return 0;
}
