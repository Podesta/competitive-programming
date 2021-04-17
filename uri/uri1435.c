#include <stdio.h>
#include <math.h>

int main(void)
{
    int size = 0;

    // Scanf returns the amount of values scanned, so, in this case, always 1,
    // unless it reads an EOF. As per the exercise, 0 also means terminate.
    while ((scanf("%d", &size) == 1) && (size != 0))
    {
        // Print line. Count from 1 to make comparasions with digit and size.
        for (int i = 1; i <= size; ++i)
        {
            // Format the matrices as requested
            int digit = 1;

            // Print characters in line
            for (int j = 1; j <= size; ++j)
            {

                // Center on the right side
                int center = ceil(size/2.0);
                if (center >= 10 && j >= 10 && digit < 10 && size - j >= 9)
                    printf(" ");
                if (j < 10 && j > 1)
                    printf(" ");
                if (center < 10 && j > 9)
                    printf(" ");
                if (center >= 10 && size - j <= 9)
                    printf(" ");

                // Ternary operator to make sure last digit doesn't include space

                // Ternary operator to make sure last digit doesn't include space
                //printf(j == size ? "%d" : "%d  ", digit);
                printf("  %d", digit);

                // Correctly change digit's value
                if (digit < i)
                    ++digit;

                if (size - j < digit)
                    --digit;
                if (size - j < digit)
                    --digit;

                // Only execute on the bottom half
                if (ceil((size+1) / 2.0) < i)
                {
                    if (digit > size - (i - 1))
                        --digit;
                }
            }
            printf("\n");
        }

        printf("\n");
    }
    return 0;
}
