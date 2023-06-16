// Write a C program to enter multiple strings and display them in lexicographical order.

#include <stdio.h>
#include <string.h>

int main()
{
    int n;
    printf("Enter the number of strings: ");
    scanf("%d", &n);
    char str[n][100];
    for (int i = 0; i < n; i++)
    {
        printf("Enter the string: ");
        scanf("%[^\n]%*c", str[i]);
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++) 
        {
            if (strcmp(str[i], str[j]) > 0)
            {
                char temp[100];
                strcpy(temp, str[i]);
                strcpy(str[i], str[j]);
                strcpy(str[j], temp);
            }
        }
    }

    printf("The strings in lexicographical order are:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%s\n", str[i]);
    }
}