#include <iostream>

int main(void) {
    int pins = 0;           // Amount of pins
    int target = 0;         // Target height for pins
    int move = 0;           // How much the pin moved in total
    int lock[1000] = {0};   // Store all the pins for the lock

    std::cin >> pins >> target;

    // Get pins
    for (int i = 0; i < pins; ++i)
        std::cin >> lock[i];

    // Unlock the lock
    for (int i = 0; i < pins - 1; ++i) {
        while (lock[i] < target) {
            ++lock[i];
            ++lock[i+1];
            ++move;
        }

        while (lock[i] > target) {
            --lock[i];
            --lock[i+1];
            ++move;
        }
    }

    std::cout << move << std::endl;
    return 0;
}
