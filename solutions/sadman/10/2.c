#include <stdio.h>

void space(int x)
{
    int start = 10; 
    int end = 50;   

    int step = (end - start) / (x + 1);
    int position = start + step;

    for (int i = 0; i < x; i++)
    {
        printf("%d ", position);
        position += step;
    }

    printf("\n");
}

int main()
{
    int numPositions = 5;
    printf("Space of %d positions: ", numPositions);
    space(numPositions);

    return 0;
}
