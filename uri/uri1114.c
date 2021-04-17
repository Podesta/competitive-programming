#include <stdio.h>

int main(void)
{
    int senha = 0;
    scanf("%d", &senha);
    do {
        if (senha != 2002)
            printf("Senha Invalida\n");
        else
            printf("Acesso Permitido\n");
    } while (senha != 2002);

    return 0;
}
