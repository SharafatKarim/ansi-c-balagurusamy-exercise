#include<stdio.h>
int main()
{
    char ch[100];
    int i,n;
    printf("enter full string:");
    gets(ch);
    printf("from which digit do you want to extract:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("%c ",ch[i]);
    }
    printf("\n");
    for(i=n;ch[i]!='\0';i++)
    {
        printf("%c ",ch[i]);
    }
}