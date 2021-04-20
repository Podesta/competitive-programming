// Same as uri2399
#include <iostream>

const int LIMIT = 50;

int main(void) {
    int size = 0;               // Size of the board
    int mine = 0;               // Amount of surrounding mines
    int board[LIMIT] = {0};     // Positions of mines

    std::cin >> size;

    // Get mine positions
    for (int i = 0; i < size; ++i)
        std::cin >> board[i];

    // Print new board
    for (int i = 0; i < size; ++i) {
        mine = 0;       // Reset mine each round

        // For the middle of the pack
        if ((i > 0) && (i < size - 1)) {
            if (board[i-1] == 1)
                ++mine;
            if (board[i] == 1)
                ++mine;
            if (board[i+1] == 1)
                ++mine;
        }

        // For first mine
        else if (i == 0) {
            if (board[i] == 1)
                ++mine;
            if (board[i+1] == 1)
                ++mine;
        }

        // For last one
        else if (i == size - 1) {
            if (board[i-1] == 1)
                ++mine;
            if (board[i] == 1)
                ++mine;
        }

        std::cout << mine << std::endl;
    }
    return 0;
}
