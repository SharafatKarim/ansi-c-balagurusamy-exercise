#include<stdio.h>
#include<math.h>
int main()
{
    int x;
    printf("Please enter an integer :");
    scanf("%d",&x);
    if(x==0)
    {
        printf("0\n");

    }
    else if(x<0)
    {
        printf("1\n");

    }
    else
        printf("-1\n");

    return 0;
}
