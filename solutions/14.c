#include<stdio.h>
#include<math.h>
int main()
{
    int isPrime,i,j;
    for(i=100;i<=200;i++)
    {
        isPrime=1;
        for(j=2;j<=sqrt(i);j++)
        {
            if(i%j==0)
                isPrime=0;
        }
        if(isPrime==1)
            printf("%d ",i);
    }
    return 0;
}






