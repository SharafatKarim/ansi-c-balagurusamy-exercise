#include <stdio.h>

int main()
{
    int i, counter = 0;
    char text[10000], key;

    printf("Enter a Character Array: ");
    scanf("%s", text);
    getchar();

    printf("Enter a Search Key Character: ");
    scanf("%c", &key);

    for (i = 0; text[i] != '\0'; i++)
    {
        if (text[i] == key)
        {
            counter++;
        }
    }

    printf("Total Number of '%c' Characters: %d\n", key, counter);

    return 0;
}
