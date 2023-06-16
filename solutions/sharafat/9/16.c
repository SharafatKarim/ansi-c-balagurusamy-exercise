// Write a C program to compare two strings without using any string function.

#include <stdio.h>

int main()
{
    char str1[100], str2[100];
    printf("Enter the first string: ");
    scanf("%[^\n]%*c", str1);
    printf("Enter the second string: ");
    scanf("%[^\n]%*c", str2);

    int i = 0;
    while (str1[i] != '\0' && str2[i] != '\0')
    {
        if (str1[i] != str2[i])
        {
            printf("The strings are not equal.\n");
            return 0;
        }
        i++;
    }
    if (str1[i] == '\0' && str2[i] == '\0')
    {
        printf("The strings are equal.\n");
    }
    else
    {
        printf("The strings are not equal.\n");
    }
}