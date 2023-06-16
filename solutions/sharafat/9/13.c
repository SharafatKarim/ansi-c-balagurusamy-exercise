// Write a program that will copy m consecutive characters from a string s1 beginning at position n into another string s2.

#include<stdio.h>
#include<string.h>

int main()
{
    char s1[100], s2[100];
    int m, n;
    printf("Enter the string: ");
    scanf("%[^\n]%*c", s1);
    printf("Enter the new string: ");
    scanf("%[^\n]%*c", s2);
    printf("Enter the value of m: ");
    scanf("%d", &m);
    printf("Enter the value of n: ");
    scanf("%d", &n);

    strncpy(s2+n, s1, m);
    printf("The string s2 is: %s\n", s2);
}