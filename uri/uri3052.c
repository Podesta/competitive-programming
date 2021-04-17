#include <stdio.h>
#include <string.h>

int main(void)
{
    int linhas  = 0;
    int colunas = 0;

    scanf("%d %d", &linhas, &colunas);

    ++colunas;
    char mapa[linhas][colunas];
    memset (mapa, 0, sizeof mapa);
    
    // Get map
    for (int i = 0; i < linhas; ++i)
        for (int j = 0; j < colunas; ++j)
            scanf("%c", &mapa[i][j]);

    // Start moving water
/*    for (int i = 0; i < linhas; ++i)
        for (int j = 0; j < colunas; ++j)
        {
            // Spread the water
            if (mapa[i][j] == 'o')
            {
                if (mapa[i+1][j] == '#')
                {
                    mapa[i][j-1] = 'o';
                    mapa[i][j+1] = 'o';
                }

                // If the water spread to the left, and there is shelf there,
                // spread again.
                if (mapa[i][j] == 'o' && mapa[i+1][j] == '#')
                    j -= 2;
            }

            // Make sure we dont go into negative with j
            if (j < -1)
                j = -1;
        }
*/
    // Print new map
    for (int i = 0; i < linhas; ++i)
        for (int j = 0; j < colunas; ++j)
            printf("%c", mapa[i][j]);

    return 0;
}
