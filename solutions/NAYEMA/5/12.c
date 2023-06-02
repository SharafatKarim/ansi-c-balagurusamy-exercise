#include<stdio.h>
int main()
{
    printf("ID : 2102026\n\n");
    int i,j,n,spa,sum=1;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(spa=1;spa<=n-i;spa++)
        {
            printf("  ");
        }
        for(j=0;j<=i;j++)
        {
            if(j==0 || i==0)
                sum=1;
            else
                sum=sum*(i-j+1)/j;
        printf("%4d",sum);
        }
        printf("\n");
    }
    return 0;
}
