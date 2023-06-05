#include<stdio.h>

int main()
{
    char name[32];
    scanf("%[^\n]", name);
    
    for (int i=0; name[i] != '\0'; i++)
    {
        printf("%c - %d\n", name[i], name[i]);
    }
}