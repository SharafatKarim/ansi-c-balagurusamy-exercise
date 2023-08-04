#include <stdio.h>

int check_prime(int number_to_check_prime)
{
    int i;
    for (i = 2; i < number_to_check_prime; i++)
    {
        if (number_to_check_prime % i == 0)
            return 0;
    }
    return 1;
}

int main()
{
    int number_to_check_prime;
    printf("Enter number to check prime: ");
    scanf("%d", &number_to_check_prime);

    if (check_prime(number_to_check_prime))
        printf("%d is prime\n", number_to_check_prime);
    else
        printf("%d is not prime\n", number_to_check_prime);
}