#include<stdio.h>
int main()
{
    int one, two;
    scanf("%d %d", &one, &two);
    if ( one % two == 0 || two % one == 0  )
        printf("multiplied");
    else
        printf("not multiplied");

}