// Write a C program to find the largest and smallest sized word in a string.

#include <stdio.h>

int main()
{
    char str[100];
    printf("Enter the string: ");
    scanf("%[^\n]%*c", str);

    int i = 0;
    int min = 100, max = 0;
    int min_index = 0, max_index = 0;
    while (str[i] != '\0')
    {
        int count = 0;
        while (str[i] != ' ' && str[i] != '\0')
        {
            count++;
            i++;
        }
        if (count < min)
        {
            min = count;
            min_index = i - count;
        }
        if (count > max)
        {
            max = count;
            max_index = i - count;
        }
        if (str[i] == '\0')
        {
            break;
        }
        i++;
    }

    printf("The smallest word is: ");
    for (int j = min_index; j < min_index + min; j++)
    {
        printf("%c", str[j]);
    }
    printf("\n");

    printf("The largest word is: ");
    for (int j = max_index; j < max_index + max; j++)
    {
        printf("%c", str[j]);
    }
}