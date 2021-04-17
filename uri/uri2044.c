#include <stdio.h>

int main(void)
{
//    int again = 0;      // Check for end
    int n = 0;          // Qty de museus
    int price = 0;      // Museum price
    int sum = 0;        // Sum of prices
    int cobra = 0;      // Deve fazer a cobranca

    while (scanf("%d", &n) != -1)
    {
        price = 0;
        sum = 0;
        cobra = 0;
        for (int i = 0; i < n; ++i)
        {
            scanf("%d", &price);
            sum += price;
            if (sum % 100 == 0)
                ++cobra;
        }
        printf("%d\n", cobra);
    }
    return 0;
}
