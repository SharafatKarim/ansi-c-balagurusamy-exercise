#include<stdio.h>
int main()
{
    char ch[20];
    int month;
    scanf("%[^\n]%d",&ch,&month);
    switch (month)
    {
    case 1:
        printf("January has 30days");
        break;
        case 2:
        printf("28/29 Days");
        break;
    case 3:
    printf("31 days");
    break;
    case 4:
    printf("30days");
    break;
    case 5:
    printf("31days");
    break;
    case 6:
    printf("30 days");
        break;
    case 7:
    printf("31days");
    break;
    case 8:
    printf("31days");
    break;
    case 9:
    printf("30 days");
    break;
    case 10:
    printf("31days");
    break;
    case 11:
    printf("30days");
    break;
    case 12:
    printf("31days");
    
    
    default:
    printf("Invalid month number.");
        break;
    }
return 0;
}
