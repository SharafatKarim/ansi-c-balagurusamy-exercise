#include <stdio.h>

#define BALLOTS 100

int main()
{
    int i, b_number;
    int votes[6] = {0}; // Increased the size of the 'votes' array to 6

    printf("Enter Ballot's Number Per Candidates:\n");

    for (i = 0; i < BALLOTS; i++)
    {
        scanf("%d", &b_number);

        switch (b_number)
        {
        case 1:
            votes[1]++;
            break;
        case 2:
            votes[2]++;
            break;
        case 3:
            votes[3]++;
            break;
        case 4:
            votes[4]++;
            break;
        case 5:
            votes[5]++;
            break;
        default:
            votes[0]++;
            break;
        }
    }

    for (i = 1; i <= 5; i++)
    {
        printf("Candidate %d Got %d Votes\n", i, votes[i]);
    }

    printf("There are %d Spoilt Votes\n", votes[0]);

    return 0;
}
