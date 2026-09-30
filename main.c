#include <stdio.h>

int main(int argc, char *argv[])
{
    int total_sec;
    int hour, min, sec;

    printf("input seconds: ");
    scanf("%d", &total_sec);

    hour = total_sec / 3600;
    min = (total_sec % 3600) / 60;
    sec = total_sec % 60;

    printf("%d:%d:%d\n", hour, min, sec);

    return 0;
}