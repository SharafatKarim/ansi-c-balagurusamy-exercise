#include<stdio.h>

int main()
{
    int i, j;
    int sum = 0;

    for (i=0; i<100; i++)
    {
        scanf("%d", &j);
        if ( 50 <= j && j <= 60 )
        {
            sum++;
            continue;
        }
    }
    printf("total - %d", sum);
}

// test cases
// 84 29 50 5 96 36 47 77 16 30 39 79 63 40 19 76 42 57 97 48 69 24 98 55 73 3 25 60 92 46 26 44 23 95 65 45 15 59 62 51 85 20 71 87 31 4 8 66 99 7 54 89 37 6 70 1 56 81 75 90 2 17 28 88 14 11 82 18 94 13 49 22 61 9 10 21 64 32 91 67 58 33 93 38 83 34 12 41 78 72 27 74 80 43 68 86 35 100 53 52
