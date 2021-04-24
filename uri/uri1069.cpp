#include <iostream>
#include <string>

int main(void) {
    int n = 0;                  // Test cases
    int diamond = 0;            // Amount of extracted diamonds
    std::string mine;           // Diamond mine

    std::cin >> n;

    for (int i = 0; i < n; ++i) {
        mine.clear();  // Clear string
        std::cin >> mine;

        // Get leght and iterate
        diamond = 0;
        int left = 0;   // Left side of the diamond
        long unsigned lenght = mine.size();
        for (long unsigned j = 0; j < lenght; ++j) {
            if (mine[j] == '<') {
                ++left;
            } else if (mine[j] == '>' && left > 0) {
                ++diamond;
                --left;
            }
        }
        std::cout << diamond << std::endl;
    }
    return 0;
}
