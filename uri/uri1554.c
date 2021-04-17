#include <stdio.h>
#include <math.h>

int main(void)
{
    int c = 0;  // Casos
    int n = 0;  // Bolas
    double d = 0;  // Distancia da bola atual ate a branca
    double m = 0;  // Mede a ultima distancia mais perta
    int b = 0;  // A bola quando m foi registrado
    int x = 0;  // X bola branca
    int y = 0;  // Y bola branca
    int x1 = 0; // X outra bola
    int y1 = 0; // Y outra bola

    scanf("%d", &c);

    for (int j = 0; j < c; ++j)
    {
        scanf("%d", &n);
        for (int i = 0; i < n; ++i)
        {
            if (i == 0) // Bola branca
                scanf("%d %d", &x, &y);
            scanf("%d %d", &x1, &y1);

            d = sqrt(pow(x1 - x, 2) + pow(y - y1 , 2));
            if (i == 1)
            {
                m = d;
                b = i;
            }
            else
            {
                if (d < m)
                {
                    b = i;
                    m = d;
                }
            }
        }
        printf("%d\n", b + 1);
     }
    return 0;
}
