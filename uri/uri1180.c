#include <stdio.h>
#include <string.h>

int main(void)
{
    int n = 0;
    int pos = 0;

    // Get the biggest value possible for signed int. With ~0, set all
    // bits to 1, then with >> 1, shift all bits tothe right, getting
    // rid of the sign bit.
    int menor = (unsigned int)~0 >> 1;

    scanf("%d", &n);
    int x[n];
    memset(x, 0, sizeof x);

    for (int i = 0; i < n; ++i)
        scanf("%d", &x[i]);

    for (int i = 0; i < n; ++i)
    {
        if (x[i] < menor)
        {
            menor = x[i];
            pos = i;
        }
    }

    printf("Menor valor: %d\n", menor);
    printf("Posicao: %d\n", pos);
    return 0;
}
