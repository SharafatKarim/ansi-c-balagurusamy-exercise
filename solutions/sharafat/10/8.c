#include <stdio.h>

void to_uppercase(char *string)
{
    int i;
    for (i = 0; string[i] != '\0'; i++)
    {
        if (string[i] >= 'a' && string[i] <= 'z')
            string[i] -= 32;
    }
}

int main()
{
    char string[100];
    printf("Enter string: ");
    scanf("%s", string);

    to_uppercase(string);
    printf("Your uppercase string : \n");
    printf("%s\n", string);
    return 0;
}