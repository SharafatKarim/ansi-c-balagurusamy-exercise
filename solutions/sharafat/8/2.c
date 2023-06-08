#include<stdio.h>

int main()
{
    int n[10][31];
    for (int i=0; i<10; i++)
    {
        for (int j=0; j<31; j++)
        {
            printf("Enter temparature for day %d in city %d -> ", j+1, i+1);
            scanf("%d", &n[i][j]);
        }
    }
    int max = 0, min = 0;
    for (int i=0; i<10; i++)
    {
        for (int j=0; j<31; j++)
        {
            if (n[i][j] > max)
            {
                max = n[i][j];
            }
            if (n[i][j] < min)
            {
                min = n[i][j];
            }
        }
    }
    printf("Max temparature is %d\n", max);
    printf("Min temparature is %d\n", min);
}