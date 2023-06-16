#include<stdio.h>
#include<string.h>
int main()
{
    char name[20];
    scanf("%s",name);
   // printf("%s",name);
    int len = strlen(name);
    for(int i=0;i<=len;i++)
    {
       printf("%d ",name[i]) ;
    }
   }
