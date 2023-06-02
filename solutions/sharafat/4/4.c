#include<stdio.h>
int main()
{
    int dep, purchase, salvage, year;
    scanf("% d %d %d", &dep, &purchase, &year);
    salvage = purchase -( dep * year);
    printf("Salvage value = %d", salvage);
}