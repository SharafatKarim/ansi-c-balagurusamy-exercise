#include <stdio.h>
#include <math.h>

int main()
{
    double x;
    char T;
    printf("PART 1\n");
    printf("Enter the angle in radians: ");
    scanf("%lf", &x);

    printf("Enter the trigonometric function type (s/S for sin, c/C for cos, t/T for tan): ");
    scanf(" %c", &T);

    if (T == 's' || T == 'S')
    {
        double result = sin(x);
        printf("sin(%.2lf) = %.4lf\n", x, result);
    }
    else if (T == 'c' || T == 'C')
    {
        double result = cos(x);
        printf("cos(%.2lf) = %.4lf\n", x, result);
    }
    else if (T == 't' || T == 'T')
    {
        double result = tan(x);
        printf("tan(%.2lf) = %.4lf\n", x, result);
    }
    else
    {
        printf("Invalid trigonometric function type.\n");
    }
    printf("\nPART 2\n");
    /*
    #include <stdio.h>
    #include <math.h>

    int main()
    {
      double x;
      char T;

      printf("Enter the angle in radians: ");
      scanf("%lf", &x);

      printf("Enter the trigonometric function type (s/S for sin, c/C for cos, t/T for tan): ");
      scanf(" %c", &T);

      switch (T)
      {
      case 's':
      case 'S':
        {
          double result = sin(x);
          printf("sin(%.2lf) = %.4lf\n", x, result);
          break;
        }
      case 'c':
      case 'C':
        {
          double result = cos(x);
          printf("cos(%.2lf) = %.4lf\n", x, result);
          break;
        }
      case 't':
      case 'T':
        {
          double result = tan(x);
          printf("tan(%.2lf) = %.4lf\n", x, result);
          break;
        }
      default:
        printf("Invalid trigonometric function type.\n");
        break;
      }

      return 0;
    }

    */
    return 0;
}
