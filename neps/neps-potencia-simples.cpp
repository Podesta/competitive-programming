#include <iostream>
#include <cmath>

int main(void) {
    double x = 0;
    double y = 0;
    double t = 0;

    std::cin >> x >> y;
    t = pow(x, y);


    std::cout << std::fixed << t << std::endl;
