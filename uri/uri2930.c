#include <stdio.h>

int main(void)
{
    int e = 0;  // Data entregue
    int d = 0;  // Data limite

    scanf("%d %d", &e, &d);

    if (d - e >= 3)
        printf("Muito bem! Apresenta antes do Natal!\n");
    else if (e - d >= 0)
    {
        printf("Parece o trabalho do meu filho!\n");
        if (e + 2 < 24)
            printf("TCC Apresentado!\n");
        else
            printf("Fail! Entao eh nataaaaal!\n");
    }
    else
        printf("Eu odeio a professora!\n");

    return 0;
}
