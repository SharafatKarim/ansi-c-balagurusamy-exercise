#include <stdio.h>

int main()
{
    float percentage;

    printf("Enter the total percentage of marks: ");
    scanf("%f", &percentage);

    if (percentage >= 80.0)
    {
        printf("First Division\n");
    }
    else if (percentage >= 60.0 && percentage < 80.0)
    {
        printf("Second Division\n");
    }
    else if (percentage < 60.0)
    {
        printf("Third Division\n");
    }
    else
    {
        printf("Invalid percentage\n");
    }

    return 0;
}
