#include <iostream>

int main(void) {
    int a = 0;
    int m = 0;
    std::cin >> a >> m;

    if (a + m <= 50)
        std::cout << S << std::endl;
    else
        std::cout << N << std::endl;
    return 0;
}
