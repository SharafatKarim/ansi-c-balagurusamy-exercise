#include<stdio.h>
#include<string.h>
int main()
{
    printf("ID : 2102026\n\n");
    char s[10],d[20];
    scanf("%s%s",&s,&d);
    printf("(a) %s %s\n",s,d);
    printf("(b) %s\n   %s\n",s,d);
    printf("(c) %.1s.%.1s.",s,d);
    return 0;
}
