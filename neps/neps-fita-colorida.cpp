#include <iostream>

const int LIMIT = 10000;

int main(void) {
    int size = 0;           // Size of tape
    int tape[LIMIT] = {0};  // Tape
    int distanceR = 0;      // Distance to the right
    int distanceL = 0;      // Distance to the left
    int finalDist = 0;      // Final distance

    std::cin >> size;

    for (int i = 0; i < size; ++i)
        std::cin >> tape[i];

    for (int i = 0; i < size; ++i) {

        // Reset the counters
        distanceR = 0;
        distanceL = 0;

        // Check to the right
        for (int j = i; j < size; ++j) {
            if (tape[j] == 0)
                break;
            ++distanceR;
            if (distanceR == 9) {
                break;
            } else if (j == size - 1) { // No 0 found. Set to max
                distanceR = 9;
            }
        }

        // Check to the left. Make sure to run when i = 0
        for (int j = i; j >= 0; --j) {
            if (tape[j] == 0)
                break;
            ++distanceL;
            if (distanceL == 9) {
                break;
            } else if (j == 0) {    // No 0 found. Set to max
                distanceL = 9;
            }
        }

        // Check for smallest distance
        if (distanceR == distanceL) {
            finalDist = distanceR;
        } else if (distanceR < distanceL) {
            finalDist = distanceR;
        } else if (distanceL < distanceR) {
            finalDist = distanceL;
        }

        std::cout << finalDist << ' ';
    }
    std::cout << std::endl;
    return 0;
}
