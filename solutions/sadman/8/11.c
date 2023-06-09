#include <stdio.h>
int main()
{
    int i = 0, size = 0, counter = 0;
    char text[10000];
    printf("Enter a Character Array: ");
    scanf("%s", text);
    while (text[size] != '\0')
    {
        size++;
    }
    for (i = 0; i < size; i++)
    {
        if (text[i] != ' ')
        {
            counter++;
        }
    }
    printf("Total Number of Characters: %d\n", counter);
}
