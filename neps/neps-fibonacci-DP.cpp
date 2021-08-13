#include <iostream>
#include <cstring>

const size_t MAX_FIB = 90;

size_t fiboDP(size_t a, size_t *list);

int main(void)
{
    size_t number;
    size_t fib[MAX_FIB];

    memset(fib, -1, sizeof(fib));

    do {
        std::cin >> number;
        if (number > 89) {
            std::cout << "Enter a value smaller than 90.\n";
            continue;
        }

        std::cout << fiboDP(number, fib) << std::endl;
    } while (number != 0);

    return 0;
}

size_t fiboDP(size_t a, size_t *list)
{
    if (list[a] != (size_t)-1)
        return list[a];

    if (a == 0)
        return 0;
    if (a == 1)
        return 1;

    list[a] = fiboDP(a - 1, list) + fiboDP(a - 2, list);
    return list[a];
}
