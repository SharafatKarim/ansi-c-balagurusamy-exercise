#include <stdio.h>
#include <math.h>

int main()
{
    float accuracy = 0.0001, x;
    scanf("%f", &x);
    float result=1, sum = x;
    int i = 1;

    while ( sum > accuracy || sum < 0 )
    {
        result += sum;
        i += 2;
        sum *= (-1)*(x*x)/(i*(i-1));

        if (i >= 100)
            break;
    }

    printf("sinx -> %f\n", result);

    result=1, sum = 1;
    i = 0;

    while ( sum > accuracy || sum < 0 )
    {
        result += sum;
        i += 2;
        sum *= (-1)*(x*x)/(i*(i-1));

        if (i >= 100)
            break;
    }

    printf("cosx -> %f\n", result);

    result=1, sum = 1;
    i = 0;

    while ( sum > accuracy || sum < 0 )
    {
        result += sum;
        i += 1;
        sum *= pow(((float)1/i),i);

        if (i >= 100)
            break;
    }

    printf("SUM -> %f\n", result);
}
