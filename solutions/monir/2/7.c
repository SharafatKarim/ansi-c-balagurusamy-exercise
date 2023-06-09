#include <stdio.h>

// Function to add two numbers
int add(int a, int b)
{
    return a + b;
}

// Function to subtract two numbers
int sub(int a, int b)
{
    return a - b;
}

int main()
{
    int num1 = 20;
    int num2 = 10;

    // Calculate the sum of the two numbers using the add() function
    int sum = add(num1, num2);

    // Calculate the difference of the two numbers using the sub() function
    int diff = sub(num1, num2);

    // Print the results
    printf("The sum of %d and %d is %d\n", num1, num2, sum);
    printf("The difference of %d and %d is %d\n", num1, num2, diff);

    return 0;
}
