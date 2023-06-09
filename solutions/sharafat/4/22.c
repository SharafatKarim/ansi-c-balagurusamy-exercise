#include<stdio.h>
int main()
{
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    printf("(a+b)*(c/d) = %d\n", (a+b)*(c/d));
    printf("(a+b)*c/d = %d\n", (a+b)*c/d);
    printf("a+(b*c)/d = %d\n", a+(b*c)/d);
}