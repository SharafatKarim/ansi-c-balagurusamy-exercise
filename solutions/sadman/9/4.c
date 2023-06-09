#include <stdio.h>

#define occurance 'a'

int main()
{
    char string[32];
    scanf("%[^\n]", string);
    int i = 0, count = 0;
    while (string[i] != '\0')
    {
        if (string[i++] == occurance)
        {
            count++;
        }
    }
    printf("Total occurance of %c = %d\n", occurance, count);
}