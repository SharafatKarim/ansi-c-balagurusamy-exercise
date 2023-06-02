#include <stdio.h>
int main()
{
    float num;
    printf("ID:2102020\n");
    printf("Enter a floating-point number: ");
    scanf("%f", &num);
    int integral = (int)num;
    int last_digit = integral % 10;
    printf("Right-most digit of integral part: %d\n", last_digit);
}
