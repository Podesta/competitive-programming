#include <iostream>

typedef long unsigned int lu;   // String store values as long unsigned int
const int LINES = 510;          // To prevent VLA - variable lenght array

int main(void) {
    lu lines   = 0;
    lu columns = 0;

    std::cin >> lines >> columns;

    std::string map[LINES];

    // Save map
    for (lu i = 0; i < lines; ++i)
        std::cin >> map[i];

    // Go over map
    for (lu i = 0; i < lines; ++i) {

        // Move drop to the right first
        for (lu j = 0; j < columns; ++j) {
            if (map[i+1][j] == '#' && map[i][j] == 'o')
                map[i][j+1] = 'o';
        }

        // Move drop to the left
        for (lu j = columns; j > 0; --j) {
            if (map[i+1][j] == '#' && map[i][j] == 'o')
                map[i][j-1] = 'o';
        }

        // Move drop down
        for (lu j = 0; j < columns; ++j) {
            if (map[i+1][j] == '.' && map[i][j] == 'o')
                map[i+1][j] = 'o';
        }
    }

    // Print new map
    for (lu i = 0; i < lines; ++i)
        std::cout << map[i] << std::endl;

    return 0;
}
