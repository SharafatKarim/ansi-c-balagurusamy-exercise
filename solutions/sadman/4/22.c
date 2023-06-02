#include <stdio.h>

int main()
{
    int a, b, c, d;
    float result1, result2, result3;
printf("ID:2102020\n");
    printf("Enter the values of a, b, c, and d: ");
    scanf("%d %d %d %d", &a, &b, &c, &d);

    result1 = (a + b) * ((float)c / d);
    result2 = (a + b) * (float)c / d;
    result3 = a + (float)(b * c) / d;

    printf("The result of (a + b) * (c / d) is %.2f\n", result1);
    printf("The result of (a + b) * c / d is %.2f\n", result2);
    printf("The result of a + (b * c) / d is %.2f\n", result3);

    return 0;
}
