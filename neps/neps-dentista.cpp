#include <iostream>
#include <vector>
#include <algorithm>

struct Consulta {
    int beg;
    int end;
};

int cmp(struct Consulta a, struct Consulta b) {
    return a.end < b.end;
}

int main(void)
{

    size_t qty = 0;
    int acpt = 0;
    int last = 0;
    int tmp = 0;
    int tmp2 = 0;

    std::cin >> qty;

    std::vector<struct Consulta> cons;
    cons.reserve(qty);

    // Read input as structs
    for (size_t i = 0; i < qty; ++i) {
        std::cin >> tmp >> tmp2;
        cons.push_back({tmp, tmp2});
    }

    // Sort it based on the ending time
    std::sort (cons.begin(), cons.end(), cmp);

    // Check if next beg is smaller than last accepted end
    for (size_t i = 0; i < qty; ++i) {
        if (cons[i].beg >= last) {
            ++acpt;
            last = cons[i].end;
        }
    }

    std::cout << acpt << std::endl;
    return 0;
}
