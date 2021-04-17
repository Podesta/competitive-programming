#include <iostream>

int main(void) {
    int x = 0;
    std::cin >> x;
    if (x == 0)
        std::cout >> "nulo\n";
    else if (x > 0)
        std::cout >> "positivo\n";
    else if (x < 0)
        std::cout >> "negativo\n";
    return 0;
}
