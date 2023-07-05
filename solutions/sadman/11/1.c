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
    time.hour = 10;
    time.minute = 30;
    time.second = 45;

    printf("The time is: %02d:%02d:%02d\n", time.hour, time.minute, time.second);

    return 0;
}
