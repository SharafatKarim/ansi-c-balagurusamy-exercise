#include <stdio.h>

int main()
{
    FILE *fp1, *fp2;
    int num1, num2;
    fp1 = fopen("DATA1", "r");
    fp2 = fopen("DATA2", "r");

    fscanf(fp1, "%d", &num1);
    fscanf(fp2, "%d", &num2);

    while (!feof(fp1) || !feof(fp2))
    {
        if (num1 != num2)
        {
            printf("Not same");
            return 1;
        }
        fscanf(fp1, "%d", &num1);
        fscanf(fp2, "%d", &num2);
    }
    if (feof(fp1) || feof(fp2))
    {
        printf("Not same");
        return 1;
    }
    printf("Same");
    return 0;
}