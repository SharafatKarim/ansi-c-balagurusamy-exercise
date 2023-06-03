#include<stdio.h>
int main()
{
    int day;
scanf("%d",&day);
switch (day)
{
case 1:
    printf("Monday\n");
    break;
case 2:
    printf("Tuesday\n");
    break;
case 3:
    printf("Wednesday\n");
    break;
case 4:
    printf("Thusday\n");
    break;
case 5:
    printf("Friday\n");
    break;
case 6:
    printf("Suterday\n");
    break;
case 7:
    printf("Sunday\n");
    break;

default:
printf("Invalid day  number\n");
    break;
}
return 0;
}
