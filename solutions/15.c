#include<stdio.h>
#include<math.h>

int main()
{
    char answer;
    double x;
    
    printf("s or S for Sin(x)\n");
    printf("c or C for Cos(x)\n");
    printf("t or T for Tan(x)\n");
    printf("Enter Choice: ");
    scanf("%c", &answer);
    printf("Enter angle in radians: ");
    scanf("%lf", &x);

    if(answer=='s'||answer=='S')
        printf("Value = %.3lf\n",sin(x));
    else if(answer=='c'||answer=='C')
        printf("Value = %.3lf\n",cos(x));
    else if(answer=='t'||answer=='T')
        printf("Value = %.3lf\n",tan(x));
    else
        printf("Invalid choice\n");

    return 0;
}
