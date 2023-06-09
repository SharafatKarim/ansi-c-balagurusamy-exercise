#include <stdio.h>
#include <string.h>

#define MAX_STRINGS 100
#define MAX_LENGTH 100

int main()
{
    char strings[MAX_STRINGS][MAX_LENGTH];
    char temp[MAX_LENGTH];
    int numStrings, i, j;

    printf("Enter the number of strings: ");
    scanf("%d", &numStrings);
    getchar();

    printf("Enter the strings:\n");
    for (i = 0; i < numStrings; i++)
    {
        fgets(strings[i], sizeof(strings[i]), stdin);
        strings[i][strcspn(strings[i], "\n")] = '\0';
    }

    // Sort the strings in lexicographical order
    for (i = 0; i < numStrings - 1; i++)
    {
        for (j = i + 1; j < numStrings; j++)
        {
            if (strcmp(strings[i], strings[j]) > 0)
            {
                strcpy(temp, strings[i]);
                strcpy(strings[i], strings[j]);
                strcpy(strings[j], temp);
            }
        }
    }

    printf("\nStrings in lexicographical order:\n");
    for (i = 0; i < numStrings; i++)
    {
        printf("%s\n", strings[i]);
    }

    return 0;
}
