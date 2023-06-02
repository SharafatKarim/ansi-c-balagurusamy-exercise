#include<stdio.h>
int main()
{
    int num, temp, count = 0;
    scanf("%d", &num);
    
    temp = num;
    while (temp > 0)
    {
        count += temp % 10;
        temp /= 10;
    }
    printf("Sum = %d", count);
}