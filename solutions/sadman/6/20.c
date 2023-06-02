#include <stdio.h>
#include <ctype.h>

int main()
{
    char str[100];
    int capitalCount = 0, smallCount = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (isupper(str[i]))
        {
            capitalCount++;
        }
        else if (islower(str[i]))
        {
            smallCount++;
        }
    }

    printf("Number of capital alphabets: %d\n", capitalCount);
    printf("Number of small alphabets: %d\n", smallCount);

    return 0;
}
