#include<stdio.h>

int main()
{
    int n;
    printf("How many ballots: ");
    scanf("%d", &n);
    int ballots[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter ballot %d: ", i + 1);
        scanf("%d", &ballots[i]);
    }
    
    int count[5] = {0, 0, 0, 0, 0};
    int spoilt = 0;
    for (int i = 0; i < n; i++)
    {
        if (ballots[i] >= 1 && ballots[i] <= 5)
        {
            count[ballots[i] - 1]++;
        }
        else
        {
            spoilt++;
        }
    }

    printf("----------\n");

    for (int i = 0; i < 5; i++)
    {
        printf("Candidate %d got %d votes\n", i + 1, count[i]);
    }
    printf("There were %d spoilt ballots\n", spoilt);
}