#include <stdio.h>
int main()
{
    int n;
    float i, sum = 0;
    printf("enter the value n: \n");
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        sum += 1 / i;
    }
    printf("sum=%.2f", sum);
}
