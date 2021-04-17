#include <stdio.h>

int main(void)
{
    int dias = 0;
    //int inicio = 0;
    int saldo = 0;
    int movimento = 0;
    int record = 0;

    scanf("%d %d", &dias, &saldo);
    for (int i = 0; i < dias; ++i)
    {
        scanf("%d", &movimento);
        saldo += movimento;

        if (saldo < record)
            record = saldo;
    }

    printf("%d\n", record);
    return 0;
}

