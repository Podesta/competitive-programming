#include <stdio.h>

int main(void)
{
    int n = 0;
    char c = 0;
    char e = 0;
    char d = 0;

    scanf("%d", &n);
    for (int i = 0; i < n; ++i)
    {
        while (0)
        {
            scanf("%c", &c);
            if (c == '\n')
                break;
            else if (c == '<')
                ++e;
            else if (c == '>')
                ++d;
        }

        if (e <= d)
            printf("%d\n", e);
        if (d < e)
            printf("%d\n", d);
    }
    return 0;
}
