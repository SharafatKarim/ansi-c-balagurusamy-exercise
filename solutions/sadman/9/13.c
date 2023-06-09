#include <stdio.h>

int main()
{
    char s1[100], s2[100];
    int n, m, i, j;

    printf("Enter a string: ");
    scanf("%s", s1);

    printf("Enter the starting position (n): ");
    scanf("%d", &n);

    printf("Enter the number of characters to copy (m): ");
    scanf("%d", &m);

    for (i = n, j = 0; j < m && s1[i] != '\0'; i++, j++)
    {
        s2[j] = s1[i];
    }
    s2[j] = '\0';

    printf("Copied substring: %s\n", s2);
}
