#include <stdio.h>
#include <math.h>

int main()
{

    long long various;
    int p, r, n;
printf("ID:2102020\n");
    printf("Enter Principal: ");
    scanf("%d", &p);

    printf("Enter Interest rate: ");
    scanf("%d", &r);

    printf("Enter Time (year): ");
    scanf("%d", &n);

    various = p * pow((1 + r), n);

    printf("Investment of V: %lld\n", various);
    return 0;
}