#include <stdio.h>

void remove_character(char *string, char what_to_remove)
{
    int i = 0;
    while (string[i] != '\0')
    {
        if (string[i] == what_to_remove)
        {
            int j = i;
            while (string[j] != '\0')
            {
                string[j] = string[j + 1];
                j++;
            }
        }
        else
        {
            i++;
        }
    }
}

int main()
{
    char string[100];
    char what_to_remove;

    printf("Enter a string: ");
    scanf("%s", string);

    printf("Enter a character to remove: ");
    scanf(" %c", &what_to_remove);

    remove_character(string, what_to_remove);

    printf("Result: %s\n", string);
}