#include <iostream>

int main(void)
{
    std::string input;
    std::string vowel;
    std::string reverse;
    size_t size = 0;
    
    std::cin >> input;

    size = input.size();
    for (size_t i = 0; i < size; ++i) {
        if (input[i] == 'a' || input[i] == 'e'|| input[i] == 'i' ||
            input[i] == 'o' || input[i] == 'u')
            vowel += input[i];
    }

    size = vowel.size();

    for (size_t i = size; i > 0; --i)
        reverse += vowel[i-1];

    if (vowel == reverse)
        std::cout << "S\n";
    else
        std::cout << "N\n";

    return 0;
}
