#include<stdio.h>
#include<string.h>

int main()
{
    char string[100];
    printf("Enter any string: ");
    scanf("%s", string);

    printf("Length of string: %d", strlen(string));
}