#include <stdio.h>

int main()
{
    FILE *fp1, *fp2;
    int num;
    fp1 = fopen("DATA1", "r");
    fp2 = fopen("DATA2", "a");

    fseek(fp2, 0, 2);

    fscanf( fp1, "%d", &num);
    while ( !feof(fp1) )
    {
        fprintf( fp2, "%d\n", num);
        fscanf( fp1, "%d", &num);
    }    
    return 0;
}