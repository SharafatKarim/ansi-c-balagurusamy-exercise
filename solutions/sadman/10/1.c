#include <stdio.h>
int change(int x, int y)
{
    int temp;
    temp = x;
    x = y;
    y = temp;
    printf("%d %d", x, y);
    return 0;
}
int main()
{
    int x, y, temp;
    printf("enter the numbers:");
    scanf("%d %d", &x, &y);
    change(x, y);
}