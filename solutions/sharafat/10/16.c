#include <stdio.h>

int char_search_inside_string(char *string, char c)
{
    int i;
    for (i=0; string[i] != '\0'; i++)
        if (string[i] == c)
            return i;
    return -1;
}

int main()
{
    char string[100], c;
    printf("Enter your string: ");
    fgets(string, 100, stdin);
    printf("Enter your character: ");
    scanf("%c", &c);

    int index = char_search_inside_string(string, c);
    if (index == -1)
        printf("Character not found\n");
    else
        printf("Character found at index %d\n", index);

    return 0;
}