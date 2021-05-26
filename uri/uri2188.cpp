#include <iostream>
#include <vector>
#include <array>

int main(void) {
    size_t tests = 0;      // Amount of tests
    size_t bigX = 0;       // Position of biggest X
    size_t smallU = 0;     // Position of smallest U
    size_t smallY = 0;     // Point of smallest Y
    int count = 0;          // Keep track of which test case
    
    std::vector<std::array<int, 4>> coord;      // Store coordinates

    while (std::cin >> tests, tests != 0) {
        // Clear and reserve vector
        coord.clear();
        coord.reserve(tests);
        bigX = 0;
        smallU = 0;
        smallY = 0;

        ++count;
        std::cout << "Teste " << count << std::endl;

        // Store coordinates. x y u v
        for (size_t i = 0; i < tests; ++i) {
            std::cin >> coord[i][0] >> coord[i][1] >> coord[i][2]
                     >> coord[i][3];
        }

        // For intersection to exist, the biggest X has to be smaller than the
        // smallest U. After that, either the Y of that point is the smallest
        // from all of them, or the V of that point is smaller than the
        // smallest Y.
        for (size_t i = 1; i < tests; ++i) {
            if (coord[i][0] > coord[i-1][0])
                bigX = i;
            if (coord[i][2] < coord[i-1][2])
                smallU = i;
            if (coord[i][1] < coord[i-1][1])
                smallY = i;
        }

        if (coord[bigX][0] > coord[smallU][2]) {
            std::cout << "nenhum\n";
            continue;
        }

        if ((bigX != smallY) && (coord[bigX][3] > coord[smallY][1])) {
            std::cout << "nenhum\n";
            continue;
        }

        // If intersection exists, print points
        std::cout << coord[bigX][0] << " " << coord[bigX][1] << " "
                  << coord[smallU][2] << " " << coord[smallU][3] << std::endl;
    }
    return 0;
}

