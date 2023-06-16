// Write a C program to replace all the white spaces in a string with double white spaces.

#include <stdio.h>

int main()
{
    char str[100];
    printf("Enter the string: ");
    scanf("%[^\n]%*c", str);
    char white_space_doubled_str[200];

    int i = 0, j = 0;
    while (str[i] != '\0')
    {
        if (str[i] == ' ')
        {
            white_space_doubled_str[j] = ' ';
            white_space_doubled_str[j+1] = ' ';
            j += 2;
        }
        else
        {
            white_space_doubled_str[j] = str[i];
            j++;
        }
        i++;
    }

    white_space_doubled_str[j] = '\0';
    printf("The string with double white spaces is: %s\n", white_space_doubled_str);
    return 0;
}