#include<stdio.h>
int main()
{
    int one, two, three, large;
    scanf("%d %d %d", &one, &two, &three);
    large = (one > two) ? (three > one) ? three : one : ( two < three) ? three : two ; 
    printf("Largest value = %d", large);
}