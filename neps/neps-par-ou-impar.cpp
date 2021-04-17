#include <iostream>

int main(void) {
    int b, c, t;
    std::cin >> b >> c;

    t = a + b;
    if ((t == 0) || (t % 2 == 0))
        std::cout << "Bino\n";
    else if (t % 2 != 0)
        std::cout << "Cino\n";
    return 0;
}
