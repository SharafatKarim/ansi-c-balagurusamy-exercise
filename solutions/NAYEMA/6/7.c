#include<stdio.h>
int main()
{
    int num;
    printf("Enter number of rows\n");
    scanf("%d",&num);
    int i,j,k=1;
    for(i=1;i<=num;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d ",k++);
        }
        printf("\n");
    }

    for(i=1;i<=num;i++)
    {
        for(j=1;j<=i;j++)
        {
            if((i%2)==(j%2))
            {
                printf("1 ");
            }
            else
            {
                printf("0 ");
            }
        }
         printf("\n");
    }
    return 0;
}