#include <stdio.h>

int main(void)
{
    int golGre = 0;     // Gols do gremio
    int golInt = 0;     // Gols do Inter
    int gremio = 0;     // Vitorias do Gremio
    int inter  = 0;     // Vitorias do Inter
    int empate = 0;     // Quantidade de empates
    int repete = 0;     // Novo Grenal
    int qtyRep = 0;     // Quantos Grenais no total

    do
    {
        scanf("%d %d", &golInt, &golGre);
        if (golInt == golGre)
            ++empate;
        else if (golInt > golGre)
            ++inter;
        else if (golInt < golGre)
            ++gremio;

        ++qtyRep;

        printf("Novo grenal (1-sim 2-nao)\n");
        scanf("%d", &repete);
    }
    while (repete == 1);
    
    printf("%d grenais\n", qtyRep);
    printf("Inter:%d\n", inter);
    printf("Gremio:%d\n", gremio);
    printf("Empates:%d\n", empate);

    return 0;
}
