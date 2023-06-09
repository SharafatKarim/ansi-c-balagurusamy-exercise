#include <stdio.h>
int main()
{
    int i = 1, x;
    printf("Enter x: \n");
    scanf("%d", &x);
    while (i <= 10) {
        printf("%d*%d=%d\n", x, i, x * i);
        i++;
    }
}
