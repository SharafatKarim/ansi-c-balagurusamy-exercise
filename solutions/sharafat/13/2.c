#include <stdio.h>

int main()
{
    FILE *fp1, *fp2, *fp3;
    int num1, num2;
    fp1 = fopen("DATA1", "r");
    fp2 = fopen("DATA2", "r");
    fp3 = fopen("DATA", "w");

    fscanf(fp1, "%d", &num1);
    fscanf(fp2, "%d", &num2);

    while (!feof(fp1) && !feof(fp2))
    {
        if (num1 < num2)
        {
            fprintf(fp3, "%d\n", num1);
            fscanf(fp1, "%d", &num1);
        }
        else
        {
            fprintf(fp3, "%d\n", num2);
            fscanf(fp2, "%d", &num2);
        }
    }
    while (!feof(fp1))
    {
        fprintf(fp3, "%d\n", num1);
        fscanf(fp1, "%d", &num1);
    }
    while (!feof(fp2))
    {
        fprintf(fp3, "%d\n", num2);
        fscanf(fp2, "%d", &num2);
    }
    return 0;
}