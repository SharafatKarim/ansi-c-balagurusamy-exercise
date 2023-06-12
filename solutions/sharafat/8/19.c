// This may work only till 100 

#include<stdio.h>
#include<string.h>

int main()
{
    char roman_digits[100];
    printf("Enter any roman number (Valid digits are I, V, X, L, C, D, M):  \n");
    scanf("%s", roman_digits);

    int length = strlen(roman_digits);
    int decimal = 0;

    for (int i=0; i< length; i++ )
    {
        if (roman_digits[i] == 'I')
        {
            if ( roman_digits[i+1] == 'V' || roman_digits[i+1] == 'X' )
                decimal -= 1;
            else
                decimal += 1;
        }
        else if (roman_digits[i] == 'V')
        {
            if ( roman_digits[i+1] == 'X' || roman_digits[i+1] == 'L' )
                decimal -= 5;
            else
                decimal += 5;
        }
        else if (roman_digits[i] == 'X')
        {
            if ( roman_digits[i+1] == 'L' || roman_digits[i+1] == 'C' )
                decimal -= 10;
            else
                decimal += 10;
        }
        else if (roman_digits[i] == 'L')
        {
            if ( roman_digits[i+1] == 'C' || roman_digits[i+1] == 'D' )
                decimal -= 50;
            else
                decimal += 50;
        }
        else if (roman_digits[i] == 'C')
        {
            if ( roman_digits[i+1] == 'D' || roman_digits[i+1] == 'M' )
                decimal -= 100;
            else
                decimal += 100;
        }
        else if (roman_digits[i] == 'D')
        {
            decimal += 500;
        }
        else if (roman_digits[i] == 'M')
        {
            decimal += 1000;
        }
    }
    printf("Decimal number is: %d", decimal);
}