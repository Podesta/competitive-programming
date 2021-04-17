#include <stdio.h>

int main(void)
{
    unsigned int n1, n2, add;
    while ((scanf("%u %u", &n1, &n2)) != EOF)
    {
    // Binary XOR. Copies the bit if it set
    // in one operand, but not both.
    add = (n1 ^ n2);
    printf("%u\n", add);
    }
    return 0;
}
