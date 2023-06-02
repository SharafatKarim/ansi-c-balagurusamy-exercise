#include<stdio.h>
#include<math.h>

int main()
{
    int x;
    printf("Enter an integer: ");
    scanf("%d", &x);
    printf("2 bit left shifted value : %d\n", x << 2);
}