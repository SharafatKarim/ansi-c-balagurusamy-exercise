#include <stdio.h>
#include <math.h>
int round_cut(float number)
{
    int nearest;
    if ((number - (int)number) < 0.50)
        nearest = floor(number);
    else
        nearest = ceil(number);
    return nearest;
}
void bars(int round, float bar)
{
    int i, j;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < round; j++)
        {
            printf("* ");
        }
        if (i == 1)
            printf("\t%0.2f", bar);

        printf("\n");
    }
}
int main()
{
    int i, j;

    float bar1, bar2, bar3, bar4;
    int round1, round2, round3, round4;
    printf("Enter Four Float Value: ");
    scanf("%f %f %f %f", &bar1, &bar2, &bar3, &bar4);
    round1 = round_cut(bar1);
    round2 = round_cut(bar2);
    round3 = round_cut(bar3);
    round4 = round_cut(bar4);

    bars(round1, bar1);
    bars(round2, bar2);
    bars(round3, bar3);
    bars(round4, bar4);

    return 0;
}