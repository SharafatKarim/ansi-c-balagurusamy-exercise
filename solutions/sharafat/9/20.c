// Write a C program to concatenate two strings without using any string function.

#include <stdio.h>

int main()
{
    char str1[100], str2[100];
    printf("Enter the first string: ");
    scanf("%[^\n]%*c", str1);
    printf("Enter the second string: ");
    scanf("%[^\n]%*c", str2);

    int i = 0;
    while (str1[i] != '\0')
    {
        i++;
    }
    int j = 0;
    while (str2[j] != '\0')
    {
        str1[i] = str2[j];
        i++;
        j++;
    }
    str1[i] = '\0';
    printf("The concatenated string is: %s\n", str1);
}