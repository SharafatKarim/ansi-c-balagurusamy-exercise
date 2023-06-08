#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char str[100], word[20], mx[20], mn[20], c;
    int i, j, flg;

    printf("Input the string : ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    i = 0;
    j = 0;
    flg = 0;

    for (i = 0; i < strlen(str); i++)
    {
        if (!isspace(str[i]) && isalnum(str[i]))
        {
            word[j++] = str[i];
        }
        else if (j != 0)
        {
            word[j] = '\0';

            if (!flg)
            {
                flg = 1;
                strcpy(mx, word);
                strcpy(mn, word);
            }

            if (strlen(word) > strlen(mx))
            {
                strcpy(mx, word);
            }

            if (strlen(word) < strlen(mn))
            {
                strcpy(mn, word);
            }

            j = 0;
        }
    }

    printf("The largest word is '%s' \nand the smallest word is '%s' \nin the string : '%s'.\n", mx, mn, str);

    return 0;
}
