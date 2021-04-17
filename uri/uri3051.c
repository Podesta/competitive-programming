#include <stdio.h>
#include <string.h>

int main(void)
{
    int sizeN   = 0;    // Amount/size of squares
    int trgtK   = 0;    // Sum we want/target
    int sum     = 0;    // The sum we currently added on the loop
    int answer  = 0;    // Amount of asnwers / how many times sum match valueK
//    int zero    = 0;    // Keep track of how many zeroes in between numbers
    int tmp    = -1;    // Temporarily stores the place there were a zero
    int midZero = 0;    // Check if there was a zero and later a sum equal trgt

    scanf("%d %d", &sizeN, &trgtK);

    int square[sizeN + 1];  // Store the values in the squares
    memset(square, 0, sizeof square);

    // Get the square values
    for (int i = 0; i < sizeN; ++i)
        scanf("%d", &square[i]);

    for (int i = 0; i < sizeN; ++i)
    {
        sum += square[i];
        
        // Track trailing zeros
        if ((square[i] == 0) && (tmp == -1))
        {
            tmp = i;
        }

        if (sum == trgtK)
        {
            ++answer;

            // 
            if (tmp != -1)
                midZero = 1;
        }
        // When you blow over, reset the sum, and restart from that number
        // If there were leading zeros, go back that much instead
        // If target was 0, go back the amount of zeroes minus 1
        else if ((sum > trgtK) && (i > 0) && (i + 1 != sizeN))
        {
            sum = 0;

            if (midZero == 1)
            {
                midZero = 0;
                i = tmp;
                tmp = -1;
            }
            else if (square[i] <= trgtK)
                --i;

            tmp = -1;
            midZero = 0;
        }

        // When the whole thing ends with zeros
        else if ((midZero == 1) && (i + 1 == sizeN))
        {
            i = tmp;
            tmp = -1;
            midZero = 0;
        }
    }
    printf("%d\n", answer);
    return 0;
}

