#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main(void)
{
    int L = 0;  // Amount of lines in the map
    int C = 0;  // Amount of columns in the map
    int A = 0;  // Starting position - line
    int B = 0;  // Starting position - column

    scanf("%d %d %d %d", &L, &C, &A, &B);

    // Decrease the value of A and B, we are counting from 0
    --A; --B;

    int map[L+1][C+1];  // Store map. Plus 1 for null
    memset(map, 0, sizeof map);

    // Receive the map
    for (int i = 0; i < L; ++i)
        for (int j = 0; j < C; ++j)
        {
            scanf("%d", &map[i][j]);
            //printf("%d", map[i][j]);
        }

    int Y = A;  // Last position - line
    int X = B;  // Last position - column
    // Check robot path
    while (true)
    {
        // Robot can only move in 4 directions. Not diagonal
        // Make sure it doesn't move into the last position
        // There is also no proper limit for A (the lines), so make sure we
        // don't go beyond the map limits, both on top and the bottom.
        // The B (columns) is properly null terminated, so no issues there.
        if ((map[A-1][B] == 1) && (A-1 != Y) && A != 0)
        {
            Y = A; X = B;
            A = A - 1;
            //printf("Y: %d   X: %d\nA: %d   B: %d\n", Y+1, X+1, A+1, B+1);
        }
        else if ((map[A+1][B] == 1) && (A+1 != Y) && A != L)
        {
            Y = A; X = B;
            A = A + 1;
            //printf("Y: %d   X: %d\nA: %d   B: %d\n", Y+1, X+1, A+1, B+1);
        }
        else if ((map[A][B-1] == 1) && (B-1 != X))
        {
            X = B; Y = A;
            B = B - 1;
            //printf("Y: %d   X: %d\nA: %d   B: %d\n", Y+1, X+1, A+1, B+1);
        }
        else if ((map[A][B+1] == 1) && (B+1 != X))
        {
            X = B; Y = A;
            B = B + 1;
            //printf("Y: %d   X: %d\nA: %d   B: %d\n", Y+1, X+1, A+1, B+1);
        }
        else
            break;
    }

    printf("%d %d\n", A+1, B+1);
    return 0;
}
