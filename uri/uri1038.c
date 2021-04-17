#include <stdio.h>

int main(void)
{
    int id, qt;
    scanf("%d %d", &id, &qt);

    switch (id)
    {
        case 1: printf("Total: %.2f\n", qt * 4.00); break;
        case 2: printf("Tptal: %.2f\n", qt * 4.50); break;
        case 3: printf("Total: %.2f\n", qt * 5.00); break;
        case 4: printf("Total: %.2f\n", qt * 2.00); break;
        case 5: printf("Total: %.2f\n", qt * 1.50); break;
    }
    return 0;
}
