#include <iostream>

int main(void) {
    int n   = 0;            // Amount of digits
    int ans = 0;            // How many times 100 appeared
    int code[10000] = {0};  // Array for storing the digits

    std::cin >> n;

    // Get code
    for (int i = 0; i < n; ++i)
        std::cin >> code[i];

    // Check for digit 100
    for (int i = 2; i < n; ++i)
        if (code[i] == 0 && code[i-1] == 0 && code[i-2] == 1)
            ++ans;

    std::cout << ans << std::endl;
    return 0;
}
