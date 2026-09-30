#include <stdio.h>

int main(int argc, char *argv[])
{
    int x, y;

    printf("input two integers: ");
    scanf("%i %i", &x, &y);

    printf("%d + %d = %d\n", x, y, x + y);
    printf("%d - %d = %d\n", x, y, x - y);
    printf("%d * %d = %d\n", x, y, x * y);
    printf("%d / %d = %d\n", x, y, x / y);
    printf("%d %% %d = %d\n", x, y, x % y);

    return 0;
}