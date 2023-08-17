#include <stdio.h>

int main()
{
    FILE *fp1, *fp2;
    int num, sum = 0;
    fp1 = fopen("DATA", "r");
    fp2 = fopen("DATA", "a");

    fscanf(fp1, "%d", &num);
    while (!feof(fp1))
    {
        printf("%d + ", num);
        sum += num;
        fscanf(fp1, "%d", &num);
    }
    printf("= %d\n", sum);
    
    fseek(fp2, 0, 2);
    fprintf(fp2, "%d\n", sum);

    return 0;
}