#include <stdio.h>
#include <string.h>

struct cricket
{
    char player_name[20];
    char team_name[20];
    int batting_average;
};

void input_player(struct cricket *p, int number)
{
    int i;
    for (i = 0; i < number; i++)
    {
        printf("Enter the name of the player: ");
        scanf("%s", p[i].player_name);
        printf("Enter the name of the team: ");
        scanf("%s", p[i].team_name);
        printf("Enter the batting average of the player: ");
        scanf("%d", &p[i].batting_average);
        printf("\n");
    }
}

void sort_by_team_name(struct cricket *p, int number)
{
    int i, j;
    struct cricket temp;
    for (i = 0; i < number; i++)
    {
        for (j = i; j < number; j++)
        {
            if (strcmp(p[i].team_name, p[j].team_name) > 0)
            {
                temp = p[i];
                p[i] = p[j];
                p[j] = temp;
            }
        }
    }
}

void print_all_players(struct cricket *p, int number)
{
    int i;
    printf("All players:\n");
    printf("Player name\tTeam name\tBatting average\n");
    for (i = 0; i < number; i++)
    {
        printf("%s\t\t%s\t\t%d\n", p[i].player_name, p[i].team_name, p[i].batting_average);
    }
}

int main()
{
    struct cricket player[50]; // make it a lower value to test
    input_player(player, 50);
    sort_by_team_name(player, 50);
    print_all_players(player, 50);
    return 0;
}