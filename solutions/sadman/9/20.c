#include <stdio.h>

int main()
{
    char str1[25], str2[25];
    int i, j;

    printf("Enter First String: ");
    gets(str1);

    printf("Enter Second String: ");
    gets(str2);

    for (i = 0; str1[i] != '\0'; i++)
    {
    }

    for (j = 0; str2[j] != '\0'; j++)
    {
        str1[i] = str2[j];
        i++;
    }

    str1[i] = '\0';

    printf("Concatenated String is %s\n", str1);

    return 0;
}
