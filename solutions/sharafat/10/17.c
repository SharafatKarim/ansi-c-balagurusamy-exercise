#include <stdio.h>

char* locate(char *s1, char *s2, int m)
{
    int i, j;
    static char temp[100];
    for (i=0; i< m; i++)
        temp[i] = s1[i];
    for (j=0; s2[j] != '\0'; j++)
        temp[i+j] = s2[j];
    for (; s1[i] != '\0'; i++)
        temp[i+j] = s1[i];
    return temp;
}

int main()
{
    char s1[100], s2[100];
    int m;
    printf("Enter your string: ");
    scanf("%[^\n]s", s1);

    printf("Enter your string: ");
    scanf(" %[^\n]s", s2);
    
    printf("Enter your index: ");
    scanf("%d", &m);

    char *updated_string;
    updated_string = locate(s1, s2, m);
    printf("Your string is: %s", updated_string);

    return 0;
}