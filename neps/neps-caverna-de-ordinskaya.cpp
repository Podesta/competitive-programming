#include <iostream>
#include <vector>

int main(void)
{
    size_t qty = 0;
    int length = 0;
    int tmp    = 0;
    int taken  = 0;
    long long total  = 0;
    std::vector<int> rec;

    std::cin >> qty >> length;
    rec.reserve(qty);

    // Get input
    for (size_t i = 0; i < qty; ++i) {
        std::cin >> tmp;
        rec.emplace_back(tmp);
    }

    for (size_t i = 0; i < qty; ++i) {

        // At first, take the samller value always
        if (i == 0) {
            if (rec[i] <= length - rec[i]) {
                total += rec[i];
                taken = rec[i];
                continue;
            } else {
                total += length - rec[i];
                taken = length - rec[i];
                continue;
            }
        }

        // Always get the smaller value, unless previous one doesn't allow
        if ((rec[i] <= length - rec[i]) && (rec[i] >= taken)) {
            total += rec[i];
            taken = rec[i];
        } else if (length - rec[i] >= taken) {
            total += length - rec[i];
            taken = length - rec[i];
        } else if (rec[i] >= taken) {
            total += rec[i];
            taken = rec[i];
        } else {
            total = -1;
            break;
        }
    }

    std::cout << total << std::endl;
    return 0;
}
