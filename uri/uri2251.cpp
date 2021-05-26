#include <iostream>

size_t hanoi(size_t a);

int main(void)
{
    size_t n;
    int i = 0;

    while (std::cin >> n, n != 0) {
        ++i;
        std::cout << "Teste " << i << std::endl;
        std::cout << hanoi(n) << std::endl << std::endl;
    }
    return 0;
}

size_t hanoi(size_t a)
{
    if (a == 1)
        return 1;
    a = (hanoi(a - 1) * 2) + 1;
    return a;
}
