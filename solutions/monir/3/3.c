#include <stdio.h>
int main()
{
    int i, count_p = 0, count_n = 0;
    printf("enter the number n: \n");
    for (;;) {
        scanf("%d", &i);

        if (i == 0)
            break;

        else if (i > 0) {
            count_p += 1;
        } else {
            count_n += 1;
        }
    }
    printf("The number of positive number in the set is: %d\n", count_p);
    printf("The number of negative number in the set is : %d\n", count_n);
}
