#include <stdio.h>

char *deleteCharacter(char *str, char ch)
{
    char *temp = str;
    char *p = str;

    while (*temp)
    {
        if (*temp != ch)
        {
            *p = *temp;
            p++;
        }
        temp++;
    }

    *p = '\0';

    return str;
}

int main()
{
    char str[] = "This is a test string";
    char ch = 'i';

    char *newStr = deleteCharacter(str, ch);

    printf("The string after deleting all occurrences of '%c' is: %s\n", ch, newStr);

    return 0;
}
