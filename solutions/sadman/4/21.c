#include <stdio.h>
int main()
{
    int a, b;
    float result;
printf("ID:2102020\n");
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    if (b == 0)
    {
        printf("Error: Division not possible.");
    }
    else
    {
        result = (float)a / b;
        printf("%d divided by %d is %.2f.", a, b, result);
    }
}
