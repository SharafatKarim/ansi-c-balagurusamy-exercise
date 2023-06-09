#include<stdio.h>
int main()
{
    float num;
    scanf("%f", &num);
    printf("%d\n", (int)(num) % 100);
}