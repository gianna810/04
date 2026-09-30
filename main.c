#include <stdio.h>

int main(int argc, char *argv[])
{
    int total_sec;
    int min, sec;

    printf("input seconds: ");
    scanf("%d", &total_sec);

    min = total_sec / 60;
    sec = total_sec % 60;

    printf("%d:%d\n", min, sec);

    return 0;
}