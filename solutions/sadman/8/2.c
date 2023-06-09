#include <stdio.h>

int main()
{
    int i, j;
    float max_temp, min_temp;
    float temperatures[31][10];

    printf("Enter Temperature Records: \n");

    for (i = 0; i < 31; i++)
    {
        for (j = 0; j < 10; j++)
        {
            scanf("%f", &temperatures[i][j]);
        }
    }

    max_temp = min_temp = temperatures[0][0];

    for (i = 0; i < 31; i++)
    {
        for (j = 0; j < 10; j++)
        {
            if (max_temp < temperatures[i][j])
            {
                max_temp = temperatures[i][j];
            }
            if (min_temp > temperatures[i][j])
            {
                min_temp = temperatures[i][j];
            }
        }
    }

    printf("The Highest Temperature: %0.2f\n", max_temp);
    printf("The Lowest Temperature: %0.2f\n", min_temp);

    return 0;
}
