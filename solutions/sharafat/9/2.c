#include <stdio.h>
#include <string.h>

int main()
{
    char answer[64];
    int attemp = 3;
    while (attemp--)
    {
        printf("Who is the inventor of C? \n");
        scanf(" %[^\n]", answer);
        if (strcmp(answer, "Dennis Ritchie") == 0)
        {
            printf("Good\n");
            break;
        }
        else
        {
            printf("try again\nCorrect answer: Dennis Ritchie\n");
        }
    }
}