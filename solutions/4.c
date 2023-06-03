#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter three values:\n");
    scanf("%d %d %d",&a,&b,&c);
    printf("Largest value is :");
    if(a>b)
    {
        if(a>c)
            printf("%d\n",a);
        else
            printf("%d\n",c);
    }
    else
    {
        if(b>c)
            printf("%d",b);
        else
            printf("%d",c);
    }
    return 0;
}
