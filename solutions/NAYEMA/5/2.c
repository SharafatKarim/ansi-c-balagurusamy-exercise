#include<stdio.h>
#include<math.h>
int main()
{
    printf("ID : 2102026\n\n");
    int x,y;
    scanf("%d%d",&x,&y);
    printf("a) %.2f\n",(float)(x+y)/(float)(x-y));
    printf("b) %.2f\n",(float)(x+y)/2);
    printf("c) %.2f\n",(float)(x+y)*(x-y));
    return 0;

}
