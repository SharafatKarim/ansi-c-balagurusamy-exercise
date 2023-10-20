#include <stdio.h>

int main()
{
    FILE *fp1, *fp2, *fp3;
    int num;
    fp1 = fopen("DATA1", "r");
    fp2 = fopen("DATA2", "r");
    fp3 = fopen("DATA", "w");

    fscanf( fp1, "%d", &num);
    while ( !feof(fp1) )
    {
        fprintf( fp3, "%d\n", num);
        fscanf( fp1, "%d", &num);
    }

    fscanf( fp2, "%d", &num);
    while ( !feof(fp2) )
    {
        fprintf( fp3, "%d\n", num);
        fscanf( fp2, "%d", &num);
    }    
    return 0;
}