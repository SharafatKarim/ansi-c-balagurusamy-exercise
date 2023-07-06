#include <stdio.h>

void insertSubstring(char *str, char *substring, int index)
{
    int len = strlen(str);
    int sublen = strlen(substring);

    // Shift the characters after the index to the right by sublen
    for (int i = len - 1; i >= index + sublen; i--)
    {
        str[i + sublen - 1] = str[i];
    }

    // Copy the substring into the string
    for (int i = 0; i < sublen; i++)
    {
        str[index + i] = substring[i];
    }
}

int main()
{
    char str[] = "This is a test string";
    char substring[] = "insert";
    int index = 5;

    insertSubstring(str, substring, index);

    printf("The string after inserting the substring is: %s\n", str);

    return 0;
}
