#include <stdio.h>

int main()
{
    int n;
    char a[20];
    float discount = 0;

    printf("Purchase amount: ");
    scanf("%d", &n);

    printf("Purchase item : ");
    scanf("%s", a);

    switch (a[0]) {
    case 'M':
        if (n <= 100) {
            discount = 0;
            break;
        } else if (n <= 200) {
            discount = 5;
            break;
        } else if (n <= 200) {
            discount = 7.5;
            break;
        } else {
            discount = 10;
            break;
        }
    case 'H':
        if (n <= 100) {
            discount = 5;
            break;
        } else if (n <= 200) {
            discount = 7.5;
            break;
        } else if (n <= 200) {
            discount = 10;
            break;
        } else {
            discount = 15;
            break;
        }
    }
    printf("Net amount : %d", (n + (int)(n * discount / 100)));
}
