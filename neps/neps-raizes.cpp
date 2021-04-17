#include <iostream>
#include <cmath>

int main(void) {
    int n = 0;
    double c = 0;

    std::cin >> n;

    for (int i = 0; i < n; ++i) {
        std::cin >> c;

        std::cout.precision(4);
        //std::cout.setf(std::ios::fixed);
        std::cout << std::fixed << std::sqrt(c) << std::endl;
        std::cout << std::defaultfloat << std::sqrt(c) << std::endl;
    }
    return 0;
}
