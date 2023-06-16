#include<stdio.h>
#include<string.h>
int main()
{
    char ch[20];
    int upper=0,lower=0,leanth,i;
    scanf("%[^\n]s",&ch);
    leanth = strlen(ch);
    printf("leanth=%d\n",leanth);
    for(i=0;i<leanth;i++)
    {
        if(ch[i]>='A' && ch[i]<='Z')
            upper++;
        else
                    lower++;
    }
    printf("Capital Alphabets: %d\nSmall Alphabets: %d",upper,lower);
    return 0;
}
