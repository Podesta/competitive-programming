#include <stdio.h>

int main(void)
{
    int impar[5] = {0};
    int par[5]   = {0};
    int qtyImp = 0;
    int qtyPar = 0;
    int tmp = 0;

    for (int i = 0; i < 15; ++i)
    {
        scanf("%d", &tmp);

        // Check par ou impar
        if (tmp % 2 == 0)
        {
            par[qtyPar] = tmp;
            ++qtyPar;
            if (qtyPar == 5)
            {
                for (int j = 0; j < qtyPar; ++j)
                    printf("par[%d] = %d\n", j, par[j]);
                qtyPar = 0;
            }
        }
        else
        {
            impar[qtyImp] = tmp;
            ++qtyImp;
            if (qtyImp == 5)
            {
                for (int j = 0; j < qtyImp; ++j)
                    printf("impar[%d] = %d\n", j, impar[j]);
                qtyImp = 0;
            }
        }
    }

    // Print remaining
    for (int i = 0; i < qtyImp; ++i)
        printf("impar[%d] = %d\n", i, impar[i]);
    for (int i = 0; i < qtyPar; ++i)
        printf("par[%d] = %d\n", i, par[i]);


    return 0;
}
