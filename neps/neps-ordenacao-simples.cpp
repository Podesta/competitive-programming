#include <iostream>
#include <vector>
#include <algorithm>

int main(void)
{
    int n;
    int tmp;

    std::cin >> n;
    std::vector<int> list;
    
    for (int i = 0; i < n; ++i) {
        std::cin >> tmp;
        list.emplace_back(tmp);
    }

    std::sort(list.begin(), list.end());
    for (size_t i = 0; (int)i < n; ++i) {
        std::cout << list[i] << ' ';
    }
    std::cout << std::endl;
    return 0;
}
