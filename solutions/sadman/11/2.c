#include <stdio.h>

struct time
{
    int hour;
    int minute;
    int second;
};

void incrementTime(struct time *time)
{
    time->second++;

    if (time->second == 60)
    {
        time->second = 0;
        time->minute++;

        if (time->minute == 60)
        {
            time->minute = 0;
            time->hour++;
        }
    }
}

int main()
{
    struct time time;

    printf("Enter the hour: ");
    scanf("%d", &time.hour);

    printf("Enter the minute: ");
    scanf("%d", &time.minute);

    printf("Enter the second: ");
    scanf("%d", &time.second);

    incrementTime(&time);

    printf("The updated time is: %02d:%02d:%02d\n", time.hour, time.minute, time.second);

    return 0;
}
