#include <stdio.h>

int main()
{
    FILE *fp1, *fp2;
    char ch, exclude;

    char name1[20], name2[20];
    printf("Enter file 1 name: ");
    scanf("%s%*c", name1);
    printf("Enter file 2 name: ");
    scanf("%s%*c", name2);

    fp1 = fopen(name1, "r");
    fp2 = fopen(name2, "w");
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