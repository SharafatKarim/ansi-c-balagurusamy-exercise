#include<stdio.h>
#include<string.h>

int main()
{
    char name[32];
    scanf("%[^\n]", name);
    
    int size = strlen(name);
    int i, j;
    for (i=0; i < size; i++)
    {
        for (j=0; j < size-i-1; j++)
        {
            if (name[j] > name[j+1])
            {
                char temp = name[j];
                name[j] = name[j+1];
                name[j+1] = temp;
            }
        }
    }
    printf("%s\n", name);
}