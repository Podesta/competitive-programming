#include <iostream>

int main(void) {
    int n = 0;      // Quantidade de valores sorteados
    int a = 0;      // Numero atual
    int u = 0;      // Numero anterior
    int r = 0;      // Repeticao atual
    int m = 0;      // Maior repeticao

    std::cin >> n;

    for (int i = 0; i < n; ++i) {
        std::cin >> a;
        if (a == u)
            ++r;
        else
            r = 0;
        if (r > m)
            m = r;
        u = a;
    }
    std::cout << m << std::endl;
    return 0;
}
