#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int a = 0;      // Dimensoes do colchao
    int b = 0;
    int c = 0;
    int h = 0;      // Dimensoes da porta
    int l = 0;

    scanf("%d %d %d %d %d", &a, &b, &c, &h, &l);
    int col[] = {a, b, c};
    int por[] = {h, l};

    // Pode rotacionar o colchao, entao somente os dois menores lados dele
    // importam. Comparar eles com a porta.
    // Refazer depois. Ordenar os valores e comparar só o necessário.
    
    qsort(col, 3, sizeof(int), cmpfunc);
    qsort(por, 2, sizeof(int), cmpfunc);
    if ((por[1] >= col[1]) && (por[0] >= col[0]))
        printf("S\n");
    else
        printf("N\n");
    return 0;
}
