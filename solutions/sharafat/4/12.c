#include<stdio.h>
int main()
{
    int one, two, three;
    int large, small;
    scanf("%d %d %d", &one, &two, &three);
    printf("sum = %d\n", one + two + three);
    printf("Average = %d\n", (one + two + three)/3);
    large = (one > two) ? (three > one) ? three : one : ( two < three) ? three : two ; 
    small = (one < two) ? (three < one) ? three : one : ( two < three) ? three : two ; 
    printf("Large = %d\n", large);
    printf("Small = %d\n", small);
}