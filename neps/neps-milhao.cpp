#include <iostream>

int main(void) {
    int dias  = 0;
    int qty   = 0;
    int acess = 0;
    int total = 0;

    std::cin >> qty;
    for (int i = 0; i < qty; ++i) {
        std::cin >> acess;

        if (total <= 1000000) {
            total += acess;
            ++dias;
        }
    }

    std::cout << dias << std::endl;
    return 0;
}
