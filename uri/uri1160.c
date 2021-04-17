#include <stdio.h>
#include <math.h>

int main(void)
{
    int t     = 0;  // Quantidade de testes
    int pa    = 0;  // Populacao A
    int pb    = 0;  // Populacao B
    int anos  = 0;  // Quantidade de anos para ultrapassar
    double ca = 0;  // Crescimento A
    double cb = 0;  // Crescimento B
    
    scanf("%d", &t);

    for (int i = 0; i < t; ++i)
    {
        scanf("%d %d %lf %lf", &pa, &pb, &ca, &cb);
        anos = 0;
        while (pa <= pb)
        {
            pa = (int)(pa * (1 + ca / 100));
            pb = (int)(pb * (1 + cb / 100));
            ++anos;

            if (anos > 100)
                break;
        }
        if (anos > 100)
            printf("Mais de 1 seculo.\n");
        else
            printf("%d anos.\n", anos);
    }
    return 0;
}
