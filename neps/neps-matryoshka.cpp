#include <iostream>
#include <vector>
#include <algorithm>

int main(void)
{
    int n;
    int tmp;
    int qtyRemoved = 0;
    std::vector<int> dolls;
    std::vector<int> sorted;
    std::vector<int> removed;

    std::cin >> n;

    for (size_t i = 0; (int)i < n; ++i) {
        std::cin >> tmp;
        dolls.emplace_back(tmp);
        sorted.emplace_back(tmp);
    }

    std::sort(sorted.begin(), sorted.end());

    for (size_t i = 0; (int)i < n; ++i) {
        if (dolls[i] != sorted[i]) {
            removed.emplace_back(sorted[i]);
            ++qtyRemoved;
        }
    }

    std::cout << qtyRemoved << std::endl;
    for (size_t i = 0; (int)i < qtyRemoved; ++i)
        std::cout << removed[i] << ' ';
    std::cout << std::endl;
    return 0;
}
