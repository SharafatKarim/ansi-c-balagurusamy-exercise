#include <stdio.h>

int main()
{
    int weekday;

    printf("Enter the numeric week day value (1-7): ");
    scanf("%d", &weekday);

    switch (weekday)
    {
    case 1:
        printf("Monday\n");
        break;
    case 2:
        printf("Tuesday\n");
        break;
    case 3:
        printf("Wednesday\n");
        break;
    case 4:
        printf("Thursday\n");
        break;
    case 5:
        printf("Friday\n");
        break;
    case 6:
        printf("Saturday\n");
        break;
    case 7:
        printf("Sunday\n");
        break;
    default:
        printf("Invalid week day value\n");
        break;
    }

    return 0;
}
