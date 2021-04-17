#include <stdio.h>

int main(void) {
    int a = 0;      // Largura conteiner
    int b = 0;      // Comprimento conteiner
    int c = 0;      // Altura conteiner
    int x = 0;      // largura navio
    int y = 0;      // comprimento navio
    int z = 0;      // altura navio
    int lx = 0;     // Limite de cont no navio eixo x
    int ly = 0;     // Limite eixo y
    int lz = 0;     // Limite altura
    long long total = 0;  // Conteieners que cabem no navio
    
    scanf("%d %d %d %d %d %d", &a, &b, &c, &x, &y, &z);

    // Conteiner sempre na mesma orientacao do navio
    lx = x / a;
    ly = y / b;
    lz = z / c;
    total = lx * ly * lz;

    printf("%d\n", total);
    return 0;
}
