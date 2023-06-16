#include<stdio.h>
#include<string.h>
void fun_short (char *str)
{
    int len = strlen(str);
    int i,j;
    for(i=0;i<len-1;i++)
    {
        for(j=0;j<len-i-1;j++)
        {
            if(str[j]>str[j+1])
            {
                char temp = str[j];
                str[j]= str[j+1];
                str[j+1] = temp;
            }
        }
    }
}
int main()
{
    char str[100];
    scanf("%s",str);
    if(str[strlen(str)-1]== '\n')
    {
        str[strlen(str)-1]= '\0';
    }
    fun_short(str);
    printf("Stroting in alphabetical order : %s\n",str);
    return 0;
}