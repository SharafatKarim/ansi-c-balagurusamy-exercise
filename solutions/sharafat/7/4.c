#include<stdio.h>
int main()
{
    int n=1;
    int p=1000, V ; float r=0.10;
    do
    {
        V = p * (1+r);
        printf("P - %d , V - %d , n - %d \n", p, V, n++);
        p = V;
    } while ( p <= 10000 );
}
