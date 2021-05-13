#include <iostream>

int main(void)
{
    int limit = 0;
    int n1 = 0;
    int n2 = 0;
    char op = 0;

    std::cin >> limit >> n1 >> op >> n2;

    switch (op) {
        case '+':
            if (n1 + n2 <= limit)
                std::cout << "OK\n";
            else
                std::cout << "OVERFLOW\n";
            break;
        case '*':
            if (n1 * n2 <= limit)
                std::cout << "OK\n";
            else
                std::cout << "OVERFLOW\n";
            break;
    }
    return 0;
}
