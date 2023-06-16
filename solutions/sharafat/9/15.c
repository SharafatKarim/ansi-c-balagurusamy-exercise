// Given a string
// ```
// 	char str [ ] = “123456789” ;
// ```
// Write a program that displays the following:
// ```
//               1
//             2 3 2
//           3 4 5 4 3
//         4 5 6 7 6 5 4
//       5 6 7 8 9 8 7 6 5
// ```

#include <stdio.h>

int main()
{
    char str[] = "123456789";
    int n = 5;
    for (int i = 0; i < n; i++)
    {
        for (int j = n-i; j > 0; j--)
        {
            printf("  ");
        }
        for (int j = i+1; j < 2*i+2; j++)
        {
            printf("%c ", str[j-1]);
        }
        for (int j = 2*i; j > i; j--)
        {
            printf("%c ", str[j-1]);
        }
        printf("\n");
    }
}