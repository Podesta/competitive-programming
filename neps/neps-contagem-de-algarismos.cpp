#include <iostream>

int main(void)
{
    int limit = 0;
    std::string number;
    std::cin >> limit;

    int zero = 0;
    int one = 0;
    int two = 0;
    int three = 0;
    int four = 0;
    int five = 0;
    int six = 0;
    int seven = 0;
    int eight = 0;
    int nine = 0;

    for (int i = 0; i < limit; ++i) {

        std::cin >> number;
        size_t size = number.size();

        for (size_t j = 0; j < size; ++j) {
            switch (number[j]) {
                case '0':
                    ++zero;
                    break;
                case '1':
                    ++one;
                    break;
                case '2':
                    ++two;
                    break;
                case '3':
                    ++three;
                    break;
                case '4':
                    ++four;
                    break;
                case '5':
                    ++five;
                    break;
                case '6':
                    ++six;
                    break;
                case '7':
                    ++seven;
                    break;
                case '8':
                    ++eight;
                    break;
                case '9':
                    ++nine;
                    break;
            }
        }
    }
    printf("0 - %d\n1 - %d\n2 - %d\n3 - %d\n4 - %d\n5 - %d\n6 - %d\n7 - %d\n"
           "8 - %d\n9 - %d\n", zero, one, two, three, four, five, six, seven,
           eight, nine);
    return 0;
}
