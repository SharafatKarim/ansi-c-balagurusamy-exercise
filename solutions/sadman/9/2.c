#include<stdio.h>
#include<string.h>
int main()
{
    char ch[30];
    printf("Who is the inventor of C?\n");
    gets(ch);

    if(strcmp(ch,"Dennis Ritchie")==0)
    {
        printf("Good");
    }
    else
    printf("try again");
}