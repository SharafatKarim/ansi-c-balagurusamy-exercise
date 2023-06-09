#include<stdio.h>
#include<math.h>

int main()

{
    float L, R;
    float C;
    double freq;
    printf("L = ");
    scanf("%f", &L);
    printf("R = ");
    scanf("%f", &R);

    for (C = 0.01; C <= 0.1; C += 0.01)
    {
        freq = sqrt( (1/(L*C)) - ((R*R)/(4*C*C)) );
        printf("C %f = %lf\n", C, freq);
    }
}