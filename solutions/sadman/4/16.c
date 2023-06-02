#include <stdio.h>
int main()
{
    int a, b, c;
    int sum;
    float average;
    printf("ID:2102020\n");
    printf("Enter Three Value: ");
    scanf("%d %d %d", &a, &b, &c);
    sum = a + b + c;
    average = sum / 3;
    printf("Without Type Cast Average: %f\n", average);
    average = (float)sum / 3;
    printf("With Type Cast Average: %f\n", average);
}