#include<stdio.h>

void intro(void)
{
    printf("Name: Sharafat\n");
    printf("Id  : 2102024\n");
}

int main()
{
    intro();
    int sum = 0, i = 100;
    for (; i <= 200; i++)
        if (i % 7 == 0)
            sum += i;
    printf("Sum is %d", sum);
}