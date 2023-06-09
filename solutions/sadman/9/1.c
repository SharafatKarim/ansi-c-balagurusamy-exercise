#include <stdio.h>
#include <string.h>
int main()
{
    char ch[20];
    int i, a;
    //scanf("%s", &ch);
    gets(ch);
    a = strlen(ch);
    for (i = 0; i<a; i++)
    {
        printf("%d ", ch[i]);
    }
}