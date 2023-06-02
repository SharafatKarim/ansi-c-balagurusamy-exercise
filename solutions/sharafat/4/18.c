#include<stdio.h>
int main()
{
    int one, two, three, x;
    scanf("%d %d %d", &one, &two, &three);
    x = one - (two / 3) + ( three * 2) - 1 ;
    printf("expression result = %d", x);
}