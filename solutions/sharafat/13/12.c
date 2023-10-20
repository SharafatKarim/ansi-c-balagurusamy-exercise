// This program may not work perfectly in some systems,
// so consider avoiding getw, putw, etc. in your programs.

#include <stdio.h>

int main()
{
    FILE *fp1, *fp2;
    fp1 = fopen("file1.txt", "r");
    fp2 = fopen("file2.txt", "w");

    int num, count = 0;
    while (feof(fp1) == 0)
    {
        fscanf(fp1, "%d ", &num);
        count++;
    }
    
    printf("Number of elements in file1.txt: %d\n", count);
    rewind(fp1);

    // char arr[count];
    for (int i = 0; i < count; i++)
    {
        // fscanf(fp1, "%d", &arr[i]);
        // arr[i] = getw(fp1);
        putw(getw(fp1), fp2);
    }
    // for (int i = 0; i < count; i++)
    // {
        // putw(arr[i], fp2);
        // fprintf(fp2, "%d ", arr[i]);
    // }

    fclose(fp1);
    fclose(fp2);
    
    printf("--- END ---\n");
    return 0;
}