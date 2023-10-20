#include <stdio.h>

int main()
{
    FILE *fp;
    fp = fopen("products.txt", "r");
    float sum = 0;
    while (feof(fp) == 0)
    {
        float temp;
        fscanf(fp, "%*d %f %*d ", &temp);
        sum += temp;
    }
    fclose(fp);
    printf("Total cost: %f\n", sum);
    return 0;
}