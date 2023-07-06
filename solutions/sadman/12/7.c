#include <stdio.h>
#include <string.h>

void swap(char **a, char **b)
{
    char *temp = *a;
    *a = *b;
    *b = temp;
}

int strcmp(const char *a, const char *b)
{
    return strcmp(a, b);
}

void sort(char **names, int n, int (*cmp)(const char *, const char *))
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (cmp(names[i], names[j]) > 0)
            {
                swap(&names[i], &names[j]);
            }
        }
    }
}

int main()
{
    char *names[] = {"John", "Jacob", "Michael", "David", "Peter"};
    int n = sizeof(names) / sizeof(names[0]);

    sort(names, n, strcmp);

    for (int i = 0; i < n; i++)
    {
        printf("%s ", names[i]);
    }
    printf("\n");

    return 0;
}
