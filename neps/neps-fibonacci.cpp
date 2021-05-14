#include <iostream>

size_t fibonacci(size_t a)
{
    if (a == 1 || a == 0)
        return 1;
    a = fibonacci(a - 1) + fibonacci(a - 2);
    return a;
}

int main(void)
{
    size_t n = 0;
    std::cin >> n;
    std::cout << fibonacci(n) << std::endl;
    return 0;
}
