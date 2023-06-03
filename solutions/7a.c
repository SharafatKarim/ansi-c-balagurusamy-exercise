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
    return 0;
}