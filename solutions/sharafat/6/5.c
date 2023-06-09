#include <stdio.h>

void intro(void)
{
    printf("Name: Sharafat\n");
    printf("Id  : 2102024\n");
}

int main()
{
    intro();
    int math, physics, chemistry;
    printf("\nMarks in mathematics -> ");
    scanf("%d", &math);
    printf("\nMarks in physics -> ");
    scanf("%d", &physics);
    printf("\nMarks in chemistry -> ");
    scanf("%d", &chemistry);

    if (math + physics >= 150)
        printf("eligible");
    else if (math >= 60 && physics >= 50 && chemistry >= 40 && math + physics + chemistry >= 200)
        printf("eligible");
    else
        printf("not eligible");
}