#include <stdio.h>
#include <string.h>

int main()
{
    char str[100], substr[100];
    printf("Enter the string: ");
    scanf("%[^\n]%*c", str);
    printf("Enter the substring: ");
    scanf("%[^\n]%*c", substr);

    int count = 0;
    char *ptr = strstr(str, substr);
    printf("%s\n", ptr+1);
    while (ptr != NULL)
    {
        count++;
        ptr = strstr(ptr+1, substr);
    }

    printf("The substring %s occurs %d times in the string %s.\n", substr, count, str);
}