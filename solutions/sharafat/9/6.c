#include<stdio.h>
#include<string.h>

int main()
{
    char str[64], modified_str[64];
    scanf("%[^\n]", str);
    char replace_from[16] = "PASCAL";
    char replace_with[16] = "C";
    int size = strlen(str);

    int i, temp;
    for (i=0, temp=0; i<size; i++)
    {
        if (str[i] == 'P')
        {
            for (int j=0; j<strlen(replace_from);j++)
            {
                if (str[i-j] != replace_from[j])
                    break;
                else 
                {
                    for (int k=0; k<strlen(replace_with); k++)
                    {
                        modified_str[temp++] = replace_with[k];
                        i += strlen(replace_from);
                    }
                }
            }
        }
        modified_str[temp++] = str[i];
    }
    modified_str[temp] = '\0';

    printf("%s\n", str);
    printf("%s", modified_str);
}