#include <iostream>

int main(void)
{
    size_t size = 0;
    int corr = 0;
    std::string gabarito;
    std::string resposta;

    std::cin >> size >> gabarito >> resposta;

    for (size_t i = 0; i < size; ++i) {
        if (gabarito[i] == resposta[i])
            ++corr;
    }
    std::cout << corr << std::endl;
    return 0;
}
