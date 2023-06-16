#include<stdio.h>
void display (char s[])
{
    int i=0;
    while(s[i]!='\0')
    {
        printf("%c",s[i]);
        i++;

    }
}
int main()
{
    char str[]="nayema";
    display(str);
}