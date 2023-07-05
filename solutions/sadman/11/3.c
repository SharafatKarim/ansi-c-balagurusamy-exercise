#include <stdio.h>
struct time
{
    int hour;
    int minute;
    int second;
};

struct time incrementTime(struct time t)
{
    t.second++;

    if (t.second == 60)
    {
        t.second = 0;
        t.minute++;

        if (t.minute == 60)
        {
            t.minute = 0;
            t.hour++;
        }
    }

    return t;
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

    struct time newTime = incrementTime(time);

    printf("The updated time is: %02d:%02d:%02d\n", newTime.hour, newTime.minute, newTime.second);

    return 0;
}
