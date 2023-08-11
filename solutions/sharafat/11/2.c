#include <stdio.h>

struct time_struct
{
    int hour;
    int minute;
    int second;
};

void input_time(struct time_struct *time)
{
    printf("Enter time in HH:MM:SS format: ");
    scanf("%d:%d:%d", &time->hour, &time->minute, &time->second);
}

void print_time(struct time_struct time)
{
    printf("Equivalent time: ");
    printf("%d:%d:%d\n", time.hour, time.minute, time.second);
}

int main()
{
    struct time_struct time;
    input_time(&time);
    print_time(time);
    return 0;
}