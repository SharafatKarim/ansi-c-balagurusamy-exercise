#include <stdio.h>

int main()
{
    int rows = 5;

    for (int i = 0; i < rows; i++) {
        for (int space = 0; space < i; space++)
            printf("  ");

        for (int j = rows -i; j >= 1; j--)
            printf("%d ", j);

        printf("\n");
    }

    return 0;
}
