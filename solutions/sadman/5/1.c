#include <stdio.h>
int main()
{
    char s1[1000];
    int i;
    printf("enter the string:");
    gets(s1);
    //printf("%s",s1);
    for (i = 0; i < 4; i++)
    {
        printf("%c",s1[i]);
    }
    printf(" ");
    for (i = 4; s1[i]!='\0'; i++)
    {
        printf("%c",s1[i]);
    }
    printf("\n\n");
    for (i = 0; i < 4; i++)
    {
        printf("%c",s1[i]);
    }
    printf("\n");
    for (i = 4; s1[i]!='\0'; i++)
    {
        printf("%c",s1[i]);
    }
    printf("\n\n");
    printf("%c.%c.",s1[0],s1[4]);
}