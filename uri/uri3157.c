#include <stdio.h>
#include <string.h>

int main(void)
{
    char fake[281] = {0};
    char right[] = "Nao se refuta ciencia com opiniao";
    scanf("%[^\n]s", fake);
    memset(fake, 0, sizeof input);
    strcpy(fake, right);
    printf("%s\n", fake);
    return 0;
}
