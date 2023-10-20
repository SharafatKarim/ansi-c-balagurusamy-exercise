#include <stdio.h>
#include <string.h>

void display(char **name, int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%s ", name[i]);
    }

}

int string_compare(char *str1, char *str2)
{
    return strcmp(str1, str2);
}

void swap_characters(char **str1, char **str2)
{
    char *temp;
    temp = *str1;
    *str1 = *str2;
    *str2 = temp;
}

void sort_array(char **name, int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = i+1; j < size; j++)
        {
            if ( string_compare(name[i], name[j] ) > 0 )
            {
                swap_characters(name + i, name + j);
            }
        }
    }
}

int main()
{
    char *names[] = {"arafat", "aabsv", "sharafat", "abid", "sadman", "sakib"};
    int size = sizeof(names) / sizeof(names[0]);

    printf("Before sorting: \n");
    display(names, size);

    sort_array(names, size);

    printf("\nAfter sorting: \n");
    display(names, size);
}