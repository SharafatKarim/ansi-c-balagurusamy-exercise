#include <stdio.h>

// Define the cricket structure
struct cricket
{
    char playerName[50];
    char teamName[50];
    float battingAverage;
};

int main()
{
    struct cricket player = {
        .playerName = "Sachin Tendulkar",
        .teamName = "Mumbai Indians",
        .battingAverage = 50.00,
    };

    // Print team-wise list with names and batting averages
    printf("\nTeam-wise Player List:\n");
    printf("Team: %s\n", player.teamName);
    printf("Player: %s\n", player.playerName);
    printf("Batting Average: %.2f\n", player.battingAverage);
    printf("\n");

    return 0;
}
