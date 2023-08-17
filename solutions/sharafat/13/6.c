#include <stdio.h>

int main()
{
    FILE *fp1, *fp2;
    char ch, exclude;
    fp1 = fopen("file1.txt", "r");
    fp2 = fopen("file2.txt", "w");
    printf("What to exclude? ");
    scanf("%c", &exclude);
    while ((ch = fgetc(fp1)) != EOF)
    {
        if (ch == exclude)
            continue;
        fputc(ch, fp2);
    }
    return 0;
}