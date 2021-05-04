#include <iostream>
#include <vector>
#include <algorithm>

int main(void) {
    size_t n = 0;   // Size of matrix
    size_t tmp = 0;    // Populate vector
    size_t tmp2 = 0;   // Sum of each line or column
    size_t magic = 0;  // The sum of first line

    std::cin >> n;
    std::vector<std::vector<size_t>> matrix;   // The square
    matrix.reserve(n);          // Reserve outer vector
    std::vector<int> unique;    // To check if all numbers are unique
    unique.reserve(n*n);

    // Get square values
    for (size_t i = 0; i < n; ++i) {
        matrix[i].reserve(n);   // Reserve inner vector
        for (size_t j = 0; j < n; ++j) {
            std::cin >> tmp;
            matrix[i].emplace_back(tmp);
            unique.emplace_back(tmp);
        }
    }

    // Check if every digit is unique
    std::sort(unique.begin(), unique.end());
    for (size_t i = 1; i < unique.size(); ++i) {
        if (!(unique[i] > unique[i-1])) {   // If the next element is not bigger
            std::cout << 0 << std::endl;    // than the previous, they are not 
            return 0;                       // unique.
        }
    }

    // Set magical value
    for (size_t i = 0; i < n; ++i)
        magic += matrix[0][i];

    // Check Horizontal
    for (size_t i = 0; i < n; ++i) {
        for (size_t j = 0; j < n; ++j)
            tmp2 += matrix[i][j];
        if (tmp2 != magic) {    // Not a magic square
            std::cout << 0 << std::endl;
            return 0;
        } else
            tmp2 = 0;
    }

    // Check Vertical
    for (size_t i = 0; i < n; ++i) {
        for (size_t j = 0; j < n; ++j)
            tmp2 += matrix[j][i];
        if (tmp2 != magic) {    // Not a magic square
            std::cout << 0 << std::endl;
            return 0;
        } else
            tmp2 = 0;
    }

    std::cout << magic << std::endl;
    return 0;
}
