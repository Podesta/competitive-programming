#include <iostream>
#include <vector>

int main(void) {
    size_t n = 0;           // Amount of students
    int winner = 0;         // Winner
    int testCase = 0;       // Which test case we are running
    int temp = 0;           // To insert elements into vector
    std::vector<int> students;   // List of students

    std::cin >> n;

    do {
        // Get list
        for (long unsigned i = 0; i < n; ++i) {
            std::cin >> temp;
            students.push_back(temp);
        }

        // Check winner
        for (long unsigned i = 0; i < n; ++i) {
            if (students[i] == (int)i + 1) {
                winner = students[i];
                ++testCase;
                std::cout << "Teste " << testCase << std::endl;
                std::cout << winner << std::endl << std::endl;
                break;
            }
        }
        students.clear();
        std::cin >> n;
    } while (n != 0);

    return 0;
}
