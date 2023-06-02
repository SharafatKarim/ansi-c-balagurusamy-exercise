#include<stdio.h>
#include<string.h>
int main()
{
    printf("ID : 2102026\n\n");
    char name1[10],name2[10];
    scanf("%s%s",&name1,&name2);
    int code1,code2;
    scanf("%d%d",&code1,&code2);
    float price1,price2;
    scanf("%f%f",&price1,&price2);
    printf("Name\tCode\tPrice\n");
    printf("%-s\t%d\t%.2f\n",name1,code1,price1);//left justify
   printf("%-s\t%d\t%.2f\n",name2,code2,price2);
  return 0;
}
