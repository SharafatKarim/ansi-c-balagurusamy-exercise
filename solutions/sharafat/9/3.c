#include<stdio.h>

#define init 2
#define end 6

int main()
{
    char string[32], modified_string[32];
    scanf("%[^\n]", string);

    for (int i= init-1; i < end; i++)
    {
        modified_string[i-init+1] = string[i];
    }

    printf("%s\n", modified_string);
}