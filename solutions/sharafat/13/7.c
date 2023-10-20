#include <stdio.h>
#include <math.h>

int main()
{
    FILE *fp;
    char file_name[100];
    int offset;

    printf("Enter file name: ");
    scanf("%s", file_name);
    printf("Enter offset: ");
    scanf("%d", &offset);

    fp = fopen(file_name, "r");

    if (fp == NULL)
    {
        printf("File not found\n");
        return 1;
    }

    char ch;
    int i = 0;
    if (offset >= 0)
    {
        while ((ch = fgetc(fp)) != EOF)
        {
            if (i >= offset)
            {
                break;
            }
            printf("%c", ch);
            if (ch == '\n')
            {
                i++;
            }
        }
    }
    else
    {
        int total_lines = 0;
        while ((ch = fgetc(fp)) != EOF)
        {
            if (ch == '\n')
            {
                total_lines++;
            }
        }
        // printf("Total lines: %d\n", total_lines);
        rewind(fp);
        i = 0;
        while ((ch = fgetc(fp)) != EOF)
        {
            if (total_lines + offset <= i)
            {
                printf("%c", ch);
                // break;
            }
            if (ch == '\n')
            {
                i++;
            }
        }
    }
    return 0;
}