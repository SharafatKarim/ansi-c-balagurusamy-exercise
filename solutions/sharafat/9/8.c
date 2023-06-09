#include<stdio.h>
#include<string.h>

int main()
{
    char string[64];
    scanf("%[^\n]", string);
    int size = strlen(string);

    for (int i=0, j=size-1; i < size/2; i++, j--)
    {
        if (string[i] != string[j])
        {
            printf("Not a palindrome");
            return 0;
        }
    }
    printf("A palindrome");
    return 0;
}