# include<stdio.h>
#include<math.h>
int main()
{
    printf("ID : 2102026\n\n");
    float num;
    scanf("%f",&num);
    int num_round=floor(num);
    int i,j;
    for(i=1;i<=num_round;i++)
    {
        for(j=1;j<=num_round;j++)
        {
            printf("*\t");
        }
        printf("\n");
    }
    printf("\t\t\t\t%.2f",num);
    return 0;
}
