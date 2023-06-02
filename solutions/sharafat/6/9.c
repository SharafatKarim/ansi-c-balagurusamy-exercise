#include <stdio.h>

void intro(void)
{
    printf("Name: Sharafat\n");
    printf("Id  : 2102024\n");
}

int main()
{
    intro();
    int num1;
    printf("Enter the number: ");
    scanf("%d", &num1);
    
    if (num1 > 0)
    printf("y = 1");
    else if (num1 == 0)
    printf("y = 0");
     else
    printf("y = -1");
    
    
    return 0;
}