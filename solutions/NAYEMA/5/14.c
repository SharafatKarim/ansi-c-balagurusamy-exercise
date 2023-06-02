#include<stdio.h>
int main()
{
    printf("ID : 2102026\n\n");
    int n,i,j,spa;
    scanf("%d",&n);
    for(i=n;i>=1;--i)
    {
        for(spa=0;spa<=n-i;spa++)
        {
            printf(" ");
        }
        for(j=1;j<=i;j++)
        {
            printf("%d",j);
        }
        printf("\n");
    }
    return 0;
}
