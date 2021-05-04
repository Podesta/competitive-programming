#include <iostream>
#include <string>
#include <algorithm>

const int LIMIT = 1e5;

int main(void) {
    int reps = 0;       // Amount of test cases
    size_t size = 0;    // Size of phone numbers
    int save = 0;       // Character not printed
    std::string phone[LIMIT];   // Phone book

    // Comma operator. Evaluate first part, then second and return second only
    // Not using comma operator anymore
    while (std::cin >> reps) {

        // Get phone numbers
        for (int i = 0; i < reps; ++i) {
            phone[i].clear();  // Clear phone book
            std::cin >> phone[i];
        }

        // Sort phone strings. The first element is the first element of the
        // array, which is phone. The last is the address of the last string,
        // which is phone + reps
        std::sort(phone, phone + reps);

        // Reset variables and go over the numbers.
        save = 0;
        size = phone[0].size();
        for (int i = 1; i < reps; ++i) {
            for (size_t j = 0; j < size; ++j) {
                if (phone[i][j] == phone[i-1][j])
                    ++save;
                else
                    break;
            }
        }

        std::cout << save << std::endl;
    }
    return 0;
}
