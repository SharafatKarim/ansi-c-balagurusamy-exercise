#include <stdio.h>

int main()
{
    float accuracy = 0.00001;
    float result=1, sum = 1;
    int i = 1;

    while ( sum > accuracy )
    {
        result += sum;
        i++;
        sum *= ((float)1/i);
    }

    printf("Result -> %f", result);
}
