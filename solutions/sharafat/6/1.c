#include<stdio.h>

void intro(void)
{
    printf("Name: Sharafat\n");
    printf("Id  : 2102024\n");
}

int main()
{
    intro();
    int n;
    scanf("%d", &n);
    if (n % 2 == 0)
        printf("NUMBER IS EVEN");
    else 
        printf("NUMBER IS ODD");
}