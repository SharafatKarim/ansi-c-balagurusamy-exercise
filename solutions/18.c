#include<stdio.h>
int main()
{
    int mark;
    scanf("%d",&mark);
    if(mark>=80)
    printf("%d% marks is indicate FIRST Division\n",mark);
     else if(mark>=60 && mark<80)
    printf("%d% marks is indicate SECOND Division\n",mark);
     else if(mark<60)
    printf("%d% marks is indicate THIRD Division\n",mark);
     else
    printf("%d% marks is indicate  invalid marks parcentage\n",mark);
    return 0;
}