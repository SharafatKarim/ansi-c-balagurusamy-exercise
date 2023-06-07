#include <math.h>
#include <stdio.h>
int main()
{
    float D;
    int x1, x2, y1, y2;
    printf("Enter the value of x1,x2,y1,y2: \n");
    scanf("%d%d%d%d", &x1, &x2, &y1, &y2);
    D = (float)sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
    printf("D=%f\n", D);
    return 0;
}
