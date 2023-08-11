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

struct time_struct increment_second_in_time(struct time_struct time)
{
    time.second++;
    if (time.second == 60)
    {
        time.second = 0;
        time.minute++;
        if (time.minute == 60)
        {
            time.minute = 0;
            time.hour++;
            if (time.hour == 24)
            {
                time.hour = 0;
            }
        }
    }
    return time;
}

int main()
{
    struct time_struct time;
    input_time(&time);
    print_time(time);
    printf("Time after incrementing second: ");
    time = increment_second_in_time(time);
    print_time(time);
    return 0;
}