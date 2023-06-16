#include<stdio.h>
#include<string.h>

int main()
{
    char str1[100], str2[100];
    printf("Enter the first string: ");
    scanf("%s", str1);
    printf("Enter the second string: ");
    scanf("%s", str2);

    int result = strncmp(str1, str2, 100);
    if (result == 0)
    {
        printf("The first string is equal to the second one.\n");
    }
    else if (result < 0)
    {
        printf("The first string is less than the second one.\n");
    }
    else
    {
        printf("The first string is greater than the second one.\n");
    }
}