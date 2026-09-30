#include <stdio.h>

int main(int argc, char *argv[])
{
    int year;
    int result;

    printf("input year: ");
    scanf("%d", &year);

    result = (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);

    printf("%i\n", result);

    return 0;
}