#include <stdio.h>

int main(int argc, char *argv[])
{
    unsigned int x;
    int b;

    printf("input a number: ");
    scanf("%u", &x);

    for (b = 0; x != 0; x >>= 1)
    {
        if (x & 1)
        {
            b++;
        }
    }

    printf("The result is : %i\n", b);

    return 0;
}