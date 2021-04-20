//Same as neps-sub-prime
#include <iostream>

int main(void) {
    int qtyBank = 0;    // Amount of Banks
    int qtyDeb  = 0;    // Amount of Debentures

    int reserve[20];    // Bank reserves
    int debtor[20];     // Debtor ban
    int creditor[20];   // Creditor bank 
    int debenture[20];  // Debetures owed

    while (true) {
        std::cin >> qtyBank >> qtyDeb;
        if (qtyBank == 0 && qtyDeb == 0)
            break;

        for (int i = 1; i <= qtyBank; ++i)
            std::cin >> reserve[i];

        for (int i = 1; i <= qtyDeb; ++i) {
            std::cin >> debtor[i] >> creditor[i] >> debenture[i];
        }

        for (int i = 1; i <= qtyDeb; ++i) {
            reserve[debtor[i]] = reserve[debtor[i]] - debenture[i];
            reserve[creditor[i]] = reserve[creditor[i]] + debenture[i];
        }

        for (int i = 1; i <= qtyBank; ++i) {
            if (reserve[i] < 0) {
                std::cout << "N\n";
                break;
            }
            else if (i == qtyBank)
                std::cout << "S\n";
        }

    }

    return 0;
}
