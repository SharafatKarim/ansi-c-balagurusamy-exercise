#include<stdio.h>

int main()
{
    int n;
    printf("How many elements: ");
    scanf("%d", &n);
    int x_coord[n], y_coord[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter x and y coordinate of point %d: ", i + 1);
        scanf("%d%d", &x_coord[i], &y_coord[i]);
    }
    
    int xi = 0, yi = 0 ;
    int xi2 = 0, xiyi = 0 ;
    

    for (int i = 0; i < n; i++)
    {
        xi += x_coord[i];
        yi += y_coord[i];
        xiyi += x_coord[0] * y_coord[i];
        xi2 += x_coord[i] * x_coord[i]; 
    }

    printf("----------\n");

    float m = 0, c = 0;

    m = (((n*xiyi)-(xi*yi))/((n*xi2)-(xi*xi)));
    c = (yi-m*xi)/n;

    printf("y= %fx + %f", m, c);
}