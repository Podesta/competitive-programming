#include <stdio.h>
#include <string.h>

int main(void)
{
    int n = 0;  // Amount of cards
    int c = 0;  // Amount of stamped cards
    int m = 0;  // Amount of cards owned
    int x = 0;  // Stamped cards missing

    scanf("%d %d %d", &n, &c, &m);

    x = c;
    int stamped[c];
    int owned[m];
    memset(stamped, 0, sizeof stamped);
    memset(owned, 0, sizeof owned);
    
    for (int i = 0; i < c; ++i)
        scanf("%d", &stamped[i]);

    for (int i = 0; i < m; ++i)
    {
        scanf("%d", &owned[i]);

        for (int j = 0; j < c; ++j)
        {
            if (owned[i] == stamped[j])
            {
                // Make sure stamped doesn't get matched twice
                stamped[j] = 0;
                --x;
                break;
            }
        }
    }
    printf("%d\n", x);
    return 0;
}
