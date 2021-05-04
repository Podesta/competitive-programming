#include <iostream>
#include <vector>

int main(void) {
    size_t size = 0;        // Size of board
    int tmp = 0;            // Populate vector
    int sum = 0;            // Populate vector. Sum of X or Y
    int big = 0;            // Sum of strongest position
    //size_t pos[2] = {0};    // Location of strongest position. Not needed
    std::vector<int> sumX;  // Sum on the lines
    std::vector<int> sumY;  // Sum on the columns
    std::vector<std::vector<int>> board;     // Chess board

    std::cin >> size;

    board.reserve(size);        // Reserve outer vector
    sumX.reserve(size);
    sumY.reserve(size);

    // Get board values and calculate sumX
    for (size_t i = 0; i < size; ++i) {
        board[i].reserve(size); // Reserve inner vector
        sum = 0;
        for (size_t j = 0; j < size; ++j) {
            std::cin >> tmp;
            sum += tmp;         // Sum on the lines
            board[i].emplace_back(tmp);
        }
        sumX.emplace_back(sum);
    }
    
    // Calculate sumY
    for (size_t i = 0; i < size; ++i) {
        sum = 0;
        for (size_t j = 0; j < size; ++j) {
            sum += board[j][i];
        }
        sumY.emplace_back(sum);
    }

    // Check strongest position
    for (size_t i = 0; i < size; ++i) {
        for (size_t j = 0; j < size; ++j) {
            tmp = sumX[i] + sumY[j] - (2 * board[i][j]);
            if (tmp > big) {
                big = tmp;
                //pos[0] = i;
                //pos[1] = j;
            }
        }
    }

    std::cout << big << std::endl;
    //std::cout << pos[0] << "," << pos[1] << std::endl;
    return 0;
}
