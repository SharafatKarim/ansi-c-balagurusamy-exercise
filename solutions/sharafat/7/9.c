#include <stdio.h>

int main() {
    int rows = 15;
    int cols = 18;
    int i, j;

    for (i = 0; i < cols; i++)
        printf("*");
    printf("\n");

    for (i = 0; i < cols; i++)
    {
        if (i < 2 || i > 15)
            printf("*");
        else
            printf("-");
    }
    printf("\n");

    for (i = 0; i < cols; i++)
    {
        if (i < 9 || i > 15)
            printf("*");
        else
            printf("-");
    }
    printf("\n");

    for (i = 0; i < cols; i++)
    {
        if (i < 4 )
            printf("*");
    }
    printf("\n");

    for (i = 0; i < cols; i++)
    {
        if (i < 4 )
            printf("*");
    }
    printf("\n");

    for (i = 0; i < cols; i++)
    {
        if (i < 4 )
            printf("*");
    }
    printf("\n");

    for (i = 0; i < cols; i++)
    {
        if (i < 5 || i > 13)
            printf("*");
        else
            printf("-");
    }
    printf("\n");

    for (i = 0; i < cols; i++)
    {
        if (i > 13)
            printf("*");
        else
            printf("-");
    }
    printf("\n");

    for (i = 0; i < cols; i++)
    {
        if (i > 13)
            printf("*");
        else
            printf("-");
    }
    printf("\n");
    for (i = 0; i < cols; i++)
    {
        if (i > 13)
            printf("*");
        else
            printf("-");
    }
    printf("\n");
    for (i = 0; i < cols; i++)
    {
        if (i > 13)
            printf("*");
        else
            printf("-");
    }
    printf("\n");
    for (i = 0; i < cols; i++)
    {
        if (i > 13)
            printf("*");
        else
            printf("-");
    }
    printf("\n");
    for (i = 0; i < cols; i++)
    {
        if (i > 13)
            printf("*");
        else
            printf("-");
    }
    printf("\n");

    for (i = 0; i < cols; i++)
    {
        if (i < 4 || i > 13)
            printf("*");
        else
            printf("-");
    }
    printf("\n");

    for (i = 0; i < cols; i++)
    {
        if (i < 3 || i > 13)
            printf("*");
        else
            printf("-");
    }
    printf("\n");

    for (i = 0; i < cols; i++)
    {
        if (i < 2 || i > 13)
            printf("*");
        else
            printf("-");
    }
    printf("\n");

    return 0;
}
