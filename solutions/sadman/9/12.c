#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main()
{
    int i, j, counter = 0;
    int start, length, text_len;

    char text[10000], word[100], temp[10000];

    printf("Enter a Text : ");
    gets(text);

    text_len = strlen(text);

    printf("Enter Sub-string to Find Occurrences : ");
    gets(word);

    for (i = 0; i < text_len; i++)
    {

        if (text[i] == word[0])
        {

            for (j = 0; j < text_len - i; j++)
                temp[j] = text[i + j];
        }

        if (strstr(temp, word) != NULL)
            counter++;
    }

    printf("Total Occurrence of \" %s \" in text : %d times\n", word, counter);

    return 0;
}
