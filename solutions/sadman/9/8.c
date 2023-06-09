#include <string.h>

int main()
{
    char s[1000];
    int i, n, c = 0;

    printf("Enter  the string : ");
    gets(s);
    n = strlen(s);

    for (i = 0; i < n / 2; i++)
    {
        if (s[i] == s[n - i - 1])
            c++;
    }
    if (c == i)
        printf("palindrome");
    else
        printf("not palindrome");

    return 0;
}