#include <stdio.h>

void fill_array(int *array, int size, int value)
{
    int temp;
    int i;
    for (i = 0; i < size; i++)
    {
        if ( array[i] > value )
        {
            temp = array[i];
            array[i] = value;
            break;
        }
    }
    for (i = i + 1; i < size; i++)
    {
        int temp2 = array[i];
        array[i] = temp;
        temp = temp2;
    }
    
}

int main()
{
    int array[10] = {1, 2, 3, 5, 6, 7, 8};
    int remaining = 4;

    fill_array(array, 10, remaining);
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", array[i]);
    }
}