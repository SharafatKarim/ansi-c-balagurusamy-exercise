#include<stdio.h>

int main()
{
    int a,b,c;
    printf("Enter the value of a,b, and c:");
    scanf("%d %d %d",&a,&b,&c);

    if((c*c)==(b*b+a*a))
    {
        printf(" This is right-angled triangle");
    }
    else
    {
        printf("This is not right-angled triangle");
    }
    return 0;


}