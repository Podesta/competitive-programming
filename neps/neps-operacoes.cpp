#include <iostream>
#include <iomanip>

int main(void)
{
    char op = 0;
    double n1 = 0;
    double n2 = 0;

    std::cin >> op >> n1 >> n2;

    std::cout << std::fixed;
    std::cout << std::setprecision(2);

    if (op == 'M')
        std::cout << n1 * n2 << std::endl;
    else if (op == 'D')
        std::cout << n1 / n2 << std::endl;

    return 0;
}
