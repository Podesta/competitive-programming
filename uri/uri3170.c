#include <stdio.h>

int main(void)
{
    int gal = 0;
    int bol = 0;
    int ext = 0;

    scanf("%d %d", &bol, &gal);
    ext = (gal / 2) - bol;

    if (ext > 0)
        printf("Faltam %d bolinha(s)\n", ext);
    else
        printf("Amelia tem todas bolinhas!");

    return 0;
}
