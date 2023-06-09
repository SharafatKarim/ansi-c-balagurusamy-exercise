#include <stdio.h>

int main()
{
    int first, second, third, forth;

    printf("Enter Book's ISBN Number: ");
    scanf("%d-%d-%d-%d", &first, &second, &third, &forth);

    printf("\n\t\tBook Information\n\t ------------------------------\n");
    printf("Region Number: %d\n", first);
    printf("Publisher Number: %d\n", second);
    printf("Book Identifier: %d\n", third);
    printf("Checker Digit: %d\n", forth);

    return 0;
}
