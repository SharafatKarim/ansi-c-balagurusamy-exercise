#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    int i=0, j=1, k=1, l=0, sum=0;
    do
    {
        if ( i == 0 || i == 1 )
            sum += 1;
        else
        {
            sum += j + k;
            l = j + k;
            k = j;
            j = l;
        }
        i++;
    } while (i<n);
    printf("%d", sum);
}
