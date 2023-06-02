#include<stdio.h>
int main()
{
    int num, temp, divisor = 1;
    scanf("%d", &num);
    
    temp = num;
    while (temp > 0)
    {
        temp /= 10;
        divisor *= 10;
    }

    temp = num;
    divisor /= 10;
    while (temp > 0)
    {
        printf("%d\n", temp);
        temp %= divisor;
        divisor /= 10;
    }
}