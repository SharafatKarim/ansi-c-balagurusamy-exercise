#include <stdio.h>

struct time_struct
{
    int hour;
    int minute;
    int second;
};

int main()
{
    struct time_struct time;
    printf("Enter time in HH:MM:SS format: ");
    scanf("%d:%d:%d", &time.hour, &time.minute, &time.second);
    printf("Equivalent time: ");

    printf("%d:%d:%d\n", time.hour, time.minute, time.second);
    return 0;
}