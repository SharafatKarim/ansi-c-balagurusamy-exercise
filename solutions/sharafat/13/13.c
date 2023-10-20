#include <stdio.h>
int main()
{
    FILE *fp;
    fp = fopen("DATA", "r");
    char ch;
    while (feof(fp) == 0)
    {
        ch = getc(fp);
        printf("%c - ASCII VALUE = %d\n", ch, (int)ch);
    }
    return 0;
}