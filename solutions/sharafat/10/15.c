#include <stdio.h>

void copy_string(char *one, char *two)
{
    int i;
    for (i=0; one[i] != '\0'; i++)
        two[i] = one[i];
    two[i] = '\0';
    return;
}

void compare_string(char *one, char *two)
{
    int i;
    for (i=0; one[i] != '\0'; i++)
        if (one[i] != two[i])
            break;
    if (one[i] == '\0' && two[i] == '\0')
        printf("Strings are equal\n");
    else
        printf("Strings are not equal\n");
    return;
}

void concat_string(char *one, char *two)
{
    int i, j;
    for (i=0; one[i] != '\0'; i++);
    for (j=0; two[j] != '\0'; j++)
        one[i+j] = two[j];
    one[i+j] = '\0';
    return;
}

int main()
{
    char string_one[100], string_two[200];
    printf("Enter your string: ");
    fgets(string_one, 100, stdin);

    copy_string(string_one, string_two);
    printf("Your second string is: %s", string_two);

    compare_string(string_one, string_two);

    concat_string(string_one, string_two);
    printf("Your concatenated string is: %s", string_one);
    
    return 0;
}