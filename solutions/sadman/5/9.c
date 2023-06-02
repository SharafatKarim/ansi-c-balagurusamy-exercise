#include <stdio.h>
int main()
{
    char first[10], middle[10], last[10];
    printf("PART 1\n");
    scanf("%s %s %s", first, middle, last);
    printf("%s %c. %s\n", first, middle[0], last);
    printf("PART 2\n");
    printf("%c. %c. %s", first[0], middle[0], last);
    printf("PART 3\n");
    printf("%s %c. %c.", last, first[0], middle[0]);
}
