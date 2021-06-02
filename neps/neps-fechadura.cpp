#include <iostream>
#include <vector>

int main(void)
{
    size_t pinQty;
    int target;
    int tmp;
    int count;

    std::cin >> pinQty >> target;

    std::vector<int> pins;
    pins.reserve(pinQty);

    for (size_t i = 0; i < pinQty; ++i) {
        std::cin >> tmp;
        pins.emplace_back(tmp);
    }

    count = 0;
    for (size_t i = 0; i < pinQty; ++i) {
        while (pins[i] < target) {
            ++pins[i];
            ++pins[i+1];
            ++count;
        }
        while (pins[i] > target) {
            --pins[i];
            --pins[i+1];
            ++count;
        }
    }
    std::cout << count << std::endl;
    return 0;
}
