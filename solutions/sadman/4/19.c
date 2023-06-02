#include <stdio.h>
int main()
{
    int a, b, c, x, y, z;
    printf("ID:2102020\n");
    printf("enter month(1 to 12):");
    scanf("%d", &a);
    if (a >= 1 && a <= 12)
    {
        if (a == 1)
        {
            printf("enter date(1 to 31):");
            scanf("%d", &b);
            if (b >= 1 && b <= 31)
            {
                printf("enter year:");
                scanf("%d", &c);
                if (c >= 2000 && c <= 3000)
                {
                    printf("valid date\n%d.%d.%d", b, a, c);
                }
                else
                {
                    printf("invalid date");
                }
            }
            else
            {
                printf("invalid date");
            }
        }

        else if (a == 2)
        {
            printf("enter year:");
            scanf("%d", &c);
            x = c % 4;
            y = c % 100;
            z = c % 400;
            if (x == 0 && y != 0 || z == 0)
            {
                printf("enter date(1 to 29):");
                scanf("%d", &b);
                if (b >= 1 && b <= 29)
                {
                    printf("valid date\n%d.%d.%d", b, a, c);
                }
                else
                {
                    printf("invalid date");
                }
            }
            else
            {
                printf("enter date(1 to 28):");
                scanf("%d", &b);
                if (b >= 1 && b <= 28)
                {
                    printf("valid date\n%d.%d.%d", b, a, c);
                }
                else
                {
                    printf("invalid date");
                }
            }
        }
        else if (a == 3)
        {
            printf("enter date(1 to 31):");
            scanf("%d", &b);
            if (b >= 1 && b <= 31)
            {
                printf("enter year:");
                scanf("%d", &c);
                if (c >= 2000 && c <= 3000)
                {
                    printf("valid date\n%d.%d.%d", b, a, c);
                }
                else
                {
                    printf("invalid date");
                }
            }
            else
            {
                printf("invalid date");
            }
        }
        else if (a == 4)
        {
            printf("enter date(1 to 30):");
            scanf("%d", &b);
            if (b >= 1 && b <= 30)
            {
                printf("enter year:");
                scanf("%d", &c);
                if (c >= 2000 && c <= 3000)
                {
                    printf("valid date\n%d.%d.%d", b, a, c);
                }
                else
                {
                    printf("invalid date");
                }
            }
            else
            {
                printf("invalid date");
            }
        }
        else if (a == 5)
        {
            printf("enter date(1 to 31):");
            scanf("%d", &b);
            if (b >= 1 && b <= 31)
            {
                printf("enter year:");
                scanf("%d", &c);
                if (c >= 2000 && c <= 3000)
                {
                    printf("valid date\n%d.%d.%d", b, a, c);
                }
                else
                {
                    printf("invalid date");
                }
            }
            else
            {
                printf("invalid date");
            }
        }
        else if (a == 6)
        {
            printf("enter date(1 to 30):");
            scanf("%d", &b);
            if (b >= 1 && b <= 30)
            {
                printf("enter year:");
                scanf("%d", &c);
                if (c >= 2000 && c <= 3000)
                {
                    printf("valid date\n%d.%d.%d", b, a, c);
                }
                else
                {
                    printf("invalid date");
                }
            }
            else
            {
                printf("invalid date");
            }
        }
        else if (a == 7)
        {
            printf("enter date(1 to 31):");
            scanf("%d", &b);
            if (b >= 1 && b <= 31)
            {
                printf("enter year:");
                scanf("%d", &c);
                if (c >= 2000 && c <= 3000)
                {
                    printf("valid date\n%d.%d.%d", b, a, c);
                }
                else
                {
                    printf("invalid date");
                }
            }
            else
            {
                printf("invalid date");
            }
        }
        else if (a == 8)
        {
            printf("enter date(1 to 30):");
            scanf("%d", &b);
            if (b >= 1 && b <= 30)
            {
                printf("enter year:");
                scanf("%d", &c);
                if (c >= 2000 && c <= 3000)
                {
                    printf("valid date\n%d.%d.%d", b, a, c);
                }
                else
                {
                    printf("invalid date");
                }
            }
            else
            {
                printf("invalid date");
            }
        }
        else if (a == 9)
        {
            printf("enter date(1 to 30):");
            scanf("%d", &b);
            if (b >= 1 && b <= 30)
            {
                printf("enter year:");
                scanf("%d", &c);
                if (c >= 2000 && c <= 3000)
                {
                    printf("valid date\n%d.%d.%d", b, a, c);
                }
                else
                {
                    printf("invalid date");
                }
            }
            else
            {
                printf("invalid date");
            }
        }
        else if (a == 10)
        {
            printf("enter date(1 to 31):");
            scanf("%d", &b);
            if (b >= 1 && b <= 31)
            {
                printf("enter year:");
                scanf("%d", &c);
                if (c >= 2000 && c <= 3000)
                {
                    printf("valid date\n%d.%d.%d", b, a, c);
                }
                else
                {
                    printf("invalid date");
                }
            }
            else
            {
                printf("invalid date");
            }
        }
        else if (a == 11)
        {
            printf("enter date(1 to 30):");
            scanf("%d", &b);
            if (b >= 1 && b <= 30)
            {
                printf("enter year:");
                scanf("%d", &c);
                if (c >= 2000 && c <= 3000)
                {
                    printf("valid date\n%d.%d.%d", b, a, c);
                }
                else
                {
                    printf("invalid date");
                }
            }
            else
            {
                printf("invalid date");
            }
        }
        else if (a == 12)
        {
            printf("enter date(1 to 31):");
            scanf("%d", &b);
            if (b >= 1 && b <= 31)
            {
                printf("enter year:");
                scanf("%d", &c);
                if (c >= 2000 && c <= 3000)
                {
                    printf("valid date\n%d.%d.%d", b, a, c);
                }
                else
                {
                    printf("invalid date");
                }
            }
            else
            {
                printf("invalid date");
            }
        }
        else
        {
            printf("invalid date");
        }
    }
}