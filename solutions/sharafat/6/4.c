#include<stdio.h>

void intro(void)
{
    printf("Name: Sharafat\n");
    printf("Id  : 2102024\n");
}

int main()
{
    intro();
    int num;
    scanf("%d", &num);

    if (num >= 80 && num <= 100)
        printf("more than 80");
    else if (num >= 60 && num <= 80)
        printf("more than 60");
    else if (num > 40 && num <= 60)
        printf("more than 40");
    else if (num >= 40 && num <= 0)
        printf("less than 40");
    else 
        printf("Invalid mark");
}