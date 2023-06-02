#include<stdio.h>
#include<string.h>
int main()
{
    printf("ID : 2102026\n\n");
    //printf("Name\t|Code\t|Quantity\t|Location\n");
    char name1[10],name2[10],loca1[20],loca2[20];
    scanf("%s%s%s%s",&name1,&name2,&loca1,&loca2);
    int code1,code2,quan1,quan2;
    scanf("%d%d%d%d",&code1,&code2,&quan1,&quan2);
     printf("Name\t|Code\t|Quantity\t|Location\n");
    printf("%s\t|%d\t|%d\t|%s\n",name1,code1,quan1,loca1);
     printf("%s\t|%d\t|%d\t|%s\n",name2,code2,quan2,loca2);
}
