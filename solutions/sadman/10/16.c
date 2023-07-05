#include <stdio.h>

int find(const char array[], char character)
{
    for (int i = 0; array[i] != '\0'; i++)
    {
        if (array[i] == character)
        {
            return 1;
        }
    }
    return 0;
}

int main()
{
    char inputArray[100];
    char targetCharacter;

    printf("Enter a character array: ");
    scanf("%s", inputArray);

    printf("Enter a character to search for: ");
    scanf(" %c", &targetCharacter);

    int result = find(inputArray, targetCharacter);

    if (result == 1)
    {
        printf("The character '%c' is found in the array.\n", targetCharacter);
    }
    else
    {
        printf("The character '%c' is not found in the array.\n", targetCharacter);
    }

    return 0;
}
