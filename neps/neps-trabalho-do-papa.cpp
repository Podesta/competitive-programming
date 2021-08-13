#include <iostream>
#include <vector>

struct Box {
    int weight;
    int support;
};

int main(void)
{
    size_t boxQty;
    int tmp;
    int tmp2;
    int pile = 0;
    std::vector<struct Box> boxes;

    std::cin >> boxQty;
    boxes.reserve(boxQty * sizeof(struct Box));

    // Get info on all boxes
    for (size_t i = 0; i < boxQty; ++i) {
        std::cin >> tmp >> tmp2;
        boxes.push_back({tmp, tmp2});
    }


