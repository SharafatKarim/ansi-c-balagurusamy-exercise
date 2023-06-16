#include<stdio.h>
#include<string.h>
int main()
{
    char name[30];
    char name2[20]="Dennis Ritchie";
   // printf("%s\n",name2);
    printf("Who is the inventor of C?\n");
    nayema:
    scanf("%s",name);
    int result = strcmp(name,name2);
    if(result == 0)
    {
        printf("GOOD\n");
    }
    else
   { 
printf("Try Again\n");
    printf("The correct answer is: %s\n",name2);
    goto nayema;
   }
}
