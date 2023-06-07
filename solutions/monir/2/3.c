#include <stdio.h>
int main()
{
    int n = 5, i = 1;
    while (i <= 10) {
        printf("%d*%d=%d\n", n, i, n * i);
        i += 1;
    }
    return 0;
}
