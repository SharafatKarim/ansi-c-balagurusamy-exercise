#include<stdio.h>
int main()
{
    int one, two;
    scanf("%d %d", &one, &two);
    if (two == 0)
        printf("Division is not possible!");
    else    
        printf("Division is possible!");
}