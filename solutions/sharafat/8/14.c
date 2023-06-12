#include<stdio.h>
#include<math.h>

int main()
{
    int icbn_number;
    printf("Enter ICBN number: ");
    scanf("%d", &icbn_number);

    int sum = 0;
    int i = 0;
    for (;i<9;i++)
    {
        sum += (i+1) * ((int)(icbn_number / pow(10,(9-i))) % 10);
    }

    printf("Sum of first 9 digits: %d\n", sum);
    if (sum % 11 == icbn_number % 10 && icbn_number % 10)
    {
        printf("Valid ICBN number\n");
    }
    else
    {
        printf("Invalid ICBN number\n");
    }
}

//  test case
// 0070411832