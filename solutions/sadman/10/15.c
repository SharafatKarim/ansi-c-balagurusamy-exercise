#include <stdio.h>
#include <string.h>

void stringCopy(char destination[], char source[])
{ 
    int i;
    for (i = 0; source[i] != '\0'; i++)
    {
        destination[i] = source[i];
    }
    destination[i] = '\0';
}

int stringCompare(const char str1[], char str2[])
{
    int i;
    for (i = 0; str1[i] != '\0' && str2[i] != '\0'; i++)
    {
        if (str1[i] < str2[i])
        {
            return -1;
        }
        else if (str1[i] > str2[i])
        {
            return 1;
        }
    }

    if (str1[i] == '\0' && str2[i] == '\0')
    {
        return 0;
    }
    else if (str1[i] == '\0')
    {
        return -1;
    }
    else
    {
        return 1;
    }
}

void stringConcatenate(char destination[], const char source[])
{
    int i;
    int destLength = strlen(destination);
    for (i = 0; source[i] != '\0'; i++)
    {
        destination[destLength + i] = source[i];
    }
    destination[destLength + i] = '\0';
}

int main()
{
    char str1[100];
    char str2[100];
    char concatenatedStr[200];

    printf("Enter the first string: ");
    scanf("%s", str1);

    printf("Enter the second string: ");
    scanf("%s", str2);

    printf("\n--- Testing String Operations ---\n");

    char copiedStr[100];
    stringCopy(copiedStr, str1);
    printf("\nCopied string: %s\n", copiedStr);

    // Testing stringCompare function
    int comparisonResult = stringCompare(str1, str2);
    if (comparisonResult == 0)
    {
        printf("The strings are equal.\n");
    }
    else if (comparisonResult < 0)
    {
        printf("String 1 is less than String 2.\n");
    }
    else
    {
        printf("String 1 is greater than String 2.\n");
    }

    // Testing stringConcatenate function
    stringConcatenate(str1, str2);
    printf("Concatenated string: %s\n", str1);

    return 0;
}
