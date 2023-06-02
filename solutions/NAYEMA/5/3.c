#include<stdio.h>
#include<math.h>
int main()
{
    printf("ID : 2102026\n\n");
    float num;
    int i;
    for(i=0;i<4;i++)
    {
        scanf("%f",&num);
    }
int num_round=floor(num);
    num_round=ceil(num);
    for(i=0;i<4;i++)
    {
        printf("The original number %.2f\n ",num);
        printf("The rounded number is %.2f\n",floor(num));
         printf("The rounded number is %.2f\n",ceil(num));
    }
    return 0;
}
