#include <stdio.h>

int main()
{
    int amount;
    printf("Enter amount: ");
    scanf("%d", &amount);

    int denominations[10] = {2000, 500, 200, 100, 50, 20, 10, 5, 2, 1};

    for (int i = 0; i < 10; i++)
    {
        int temp = amount / denominations[i];
        if (temp != 0)
        {
            printf("%d notes of %d\n", temp, denominations[i]);
            amount -= temp * denominations[i];
        }
    }
}