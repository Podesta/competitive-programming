#include <iostream>

int main(void)
{
    int value = 0;
    int coins = 0;

    std::cin >> value;

    coins += value / 100;
    value = value % 100;

    coins += value / 50;
    value = value % 50;

    coins += value / 25;
    value = value % 25;

    coins += value / 10;
    value = value % 10;

    coins += value / 5;
    value = value % 5;

    coins += value / 1;
    value = value % 1;

    std::cout << coins << std::endl;
    return 0;
}
