#include <stdio.h>
#include <stdlib.h>

// Global because the array is too big. Segmentation fault otherwise
int housePrice[101][100000] = {{0}};        // Price of each house, for each case. 100 is the max.

int compare( const void* a, const void* b)
{
     int int_a = * ( (int*) a );
     int int_b = * ( (int*) b );

     if ( int_a == int_b ) return 0;
     else if ( int_a < int_b ) return -1;
     else return 1;
}


int main(void)
{
    // Read user input
    int T = 0;
    scanf("%d", &T);
    
    // Arrays initialized as maximum size because can't initiate them to 0 if they have variable size
    // Initialize arrays for saving user input
    int numHouse[101] = {0};                // Amount of houses in each Case
    int budget[101] = {0};                  // Budget of each case
    
    
    // Start loop for reading all user input
    for (int i = 0; i < T; i++)
    {
        scanf("%d %d", &numHouse[i], &budget[i]);
        
        // Read input for each case
        for (int k = 0; k < numHouse[i]; k++)
        {
            scanf("%d", &housePrice[i][k]);
        }
    }
        
    // Sort the house prices in each case
    for (int i = 0; i < T; i++)
    {
        qsort( housePrice[i], numHouse[i], sizeof(int), compare);
    }



        // Old manual sorting algo. Too inefficient.
        /***************************
        int temp = 0;   // To store the value in the sorting algorithm
        for (int k = 0; k < numHouse[i]; k++)
        {
            // Exclude the last k+1, because the array is not correctly limited, but the last value will be 0
            if (housePrice[i][k] > housePrice[i][k+1] && housePrice[i][k+1] != 0)
            {
                temp = housePrice[i][k+1];
                housePrice[i][k+1] = housePrice[i][k];
                housePrice[i][k] = temp;
                k = k-2;
            }

        }
        ****************************/

    // Test sorting algo
    /******************************
    for (int i = 0; i < 100; i++)
    {
        printf("%d ", housePrice[0][i]);
    }
    *****************************/

    // Check how many houses can be bought and print the results for each case
    for (int i = 0; i < T; i++)
    {
        int houseBuy = 0;       // Amount of houses bought
        int k = 0;              // For the if loop. Going through all the houses in a case
        int caseNum = i+1;      // For printing the results

    while (budget[i] >= housePrice[i][k] && housePrice[i][k] != 0)
        {
            budget[i] = budget[i] - housePrice[i][k];
            ++houseBuy;
            ++k;
        }

        printf("Case #%d: %d\n", caseNum, houseBuy); 

    }
    
    return 0;
}
