#include <stdio.h>
#include <string.h>
int main()
{
    char ch1[50];
    char ch2[50];
    printf("enter 1st string:\n");
    scanf("%s", &ch1);
    printf("enter 2nd string:\n");
    scanf("%s", &ch2);
    if (strcmp(ch1, ch2) == 0)
    {
        printf("string equal");
    }
    else
    {
        printf("string not equal");
    }
}