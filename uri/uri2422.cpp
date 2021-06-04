#include <iostream>
#include <vector>

size_t search(std::vector<int> &vec, int n1, int target);

int main(void)
{
    size_t houseQty;
    size_t answ;
    int tmp;
    int target;
    std::vector<int> houses;

    std::cin >> houseQty;
    houses.reserve(houseQty);
    
    for (size_t i = 0; i < houseQty; ++i) {
        std::cin >> tmp;
        houses.emplace_back(tmp);
    }

    std::cin >> target;

    for (size_t i = 0; i < houseQty; ++i) {
        answ = search(houses, houses[i], target);
        if (answ != (size_t)-1) {
            std::cout << houses[i] << " " << houses[answ] << std::endl;
            break;
        }
    }

    return 0;
}

size_t search(std::vector<int> &vec, int n1, int target)
{
    size_t size = vec.size();
    size_t beg = 0;
    size_t end = size - 1;
    size_t mid = (beg + end) / 2;

    if (n1 + vec[beg] == target)
        return beg;
    if (n1 + vec[end] == target)
        return end;

    while (beg < mid) {
        if (n1 + vec[mid] == target) {
            return mid;
        } else if (n1 + vec[mid] < target) {
            beg = mid;
            mid = (beg + end) / 2;
        } else if (n1 + vec[mid] > target) {
            end = mid;
            mid = (beg + end) / 2;
        }
    }
    return (size_t)-1;
}
