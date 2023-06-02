#include<stdio.h>
#include<string.h>
int main()
{
    printf("ID : 2102026\n\n");
    char w1[10],w2[10],w3[10];
    scanf("%s%s%s",&w1,&w2,&w3);
    printf("a)%s %.1s. %s\n",w1,w2,w3);
    printf("b)%.1s. %.1s. %s\n",w1,w2,w3);
    printf("c)%s%.1s.%.1s.",w3,w1,w2);
    return 0;
}
