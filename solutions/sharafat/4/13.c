#include<stdio.h>
int main()
{
    int customer_code, calls_made;
    scanf("%d %d", &customer_code, &calls_made);
    printf("Bill = %lf", 250 + (1.25 * calls_made));
}