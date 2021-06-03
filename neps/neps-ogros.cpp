#include <iostream>
#include <vector>

size_t binSearch (size_t size, int target, std::vector<int> &vec);

int main(void)
{
    size_t bandQty;
    size_t ogreQty;
    size_t pos;
    int input;
    std::vector<int> bands;
    std::vector<int> prizes;

    std::cin >> bandQty >> ogreQty;

    bands.reserve(bandQty-1);
    prizes.reserve(bandQty);

    // Read band values
    for (size_t i = 0; i < bandQty - 1; ++i) {
        std::cin >> input;
        bands.emplace_back(input);
    }

    // Read prizes for each band
    for (size_t i = 0; i < bandQty; ++i) {
        std::cin >> input;
        prizes.emplace_back(input);
    }

    // Read stregth of ogres
    for (size_t i = 0; i < ogreQty; ++i) {
        std::cin >> input;
        pos = binSearch(bandQty-1, input, bands);

        std::cout << prizes[pos] << " ";
    }
    std::cout << std::endl;

    return 0;
}

size_t binSearch (size_t size, int target, std::vector<int> &vec)
{
    size_t beg = 0;
    size_t end = size - 1;
    size_t mid = (beg + end) / 2;

    // Check if smaller than smallest, or bigger than biggest
    if (target < vec[0])
        return 0;
    else if (target >= vec[end])
        return end + 1;

    while (beg <= end) {
        mid = (beg + end) / 2;
        if (target < vec[mid]) {
            if (target >= vec[mid-1])   // Found it
                return mid;

            end = mid;
            mid = (beg + end) / 2;

        } else if (target >= vec[mid]) {
            if (target < vec[mid+1])    // Found it
                return mid + 1;

            beg = mid;
            mid = (beg + mid) / 2;
        }
    }

    std::cout << "\n\nERROR\n\n";
    exit(EXIT_FAILURE);
}
