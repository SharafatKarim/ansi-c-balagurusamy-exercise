#include<stdio.h>
#include<string.h>
int main()
{
    char str[100],str2[100];
    int i,j;
    scanf("%s",str);
    int start,extract_position;
    scanf("%d%d",&start,&extract_position);
    int len = strlen(str);
   if(start+extract_position-1<len)
   {
    for( i=0;i<extract_position-1;i++)
    {
        str2[i]= str[start-1+i];
    }
    str2[i]= '\0';
    printf("The Extracted part : %s",str2);
   }
   else
   printf("Invalid ! Extraction is not posible");
}