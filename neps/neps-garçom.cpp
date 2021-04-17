#include <iostream>

int main(void) {
    int n = 0;      // Quantidade de bandejas
    int c = 0;      // Quantidade de copos
    int l = 0;      // Quantidade de latas
    int b = 0;      // Copos quebrados

    std::cin >> n;

    for (int i = 0; i < n; ++i)
    {
        std::cin >> c >> l;
        if (l > c)
            b += c;
    }

    std::cout << b << std::endl;
    return 0;
}
