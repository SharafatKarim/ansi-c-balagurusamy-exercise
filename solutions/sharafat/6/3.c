#include<stdio.h>

void intro(void)
{
    printf("Name: Sharafat\n");
    printf("Id  : 2102024\n");
}

int main()
{
    intro();
    int a, b, c, d, m, n;
    printf("Enter six integers: ");
    scanf("%d %d %d %d %d %d", &a, &b, &c, &d, &m, &n);

    if ( ( a * b - c * b ) == 0 )
        printf("Can't be solved!");
    else
    {
        int x1, x2;
        x1 = ( ( m * d - b * n ) / ( a * d - c * b ) );
        x2 = ( ( n * a - m * c ) / ( a * d - c * b ) );
        printf("x1 = %d\n", x1);
        printf("x2 = %d\n", x2);
    }
    
}