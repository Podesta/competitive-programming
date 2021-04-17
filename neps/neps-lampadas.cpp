#include <iostream>

int main(void) {
    int n = 0;      // Quantas vezes o interruptor sera pressionado
    int a = 0;      // Estado lampada a
    int b = 0;      // Estado lampada b
    int p = 0;      // Qual interruptor foi pressionado

    std::cin >> n;

    for (int i = 0; i < n; ++i) {
        std::cin >> p;
        case (p) {
            switch 1:
                if (a == 0)
                    ++a;
                else if (a == 1)
                    --a;
                break;
            switch 2:
                if (a == 0)
                    ++a;
                else if (a == 1)
                    --a;
                if (b == 0)
                    ++b;
                else if (b == 1)
                    --b;
                break;
        }
    }
    std::cout << a << std::endl << b << std::endl;
    return 0;
}
