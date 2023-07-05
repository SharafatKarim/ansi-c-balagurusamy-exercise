#include <stdio.h>

float calculateArea(float a, float b, float c);
float calculatePerimeter(float a, float b, float c);

int main()
{
  float a, b, c;
  char choice;

  printf("Enter the values of three sides of a triangle:\n");
  printf("Side a: ");
  scanf("%f", &a);
  printf("Side b: ");
  scanf("%f", &b);
  printf("Side c: ");
  scanf("%f", &c);

  printf("Do you want to calculate the area (a) or perimeter (p) of the triangle? ");
  scanf(" %c", &choice);

  switch (choice)
  {
  case 'a':
  case 'A':
    float area = calculateArea(a, b, c);
    printf("Area of the triangle: %.2f\n", area);
    break;
  case 'p':
  case 'P':
    float perimeter = calculatePerimeter(a, b, c);
    printf("Perimeter of the triangle: %.2f\n", perimeter);
    break;
  default:
    printf("Invalid choice.\n");
    break;
  }

  return 0;
}

float calculateArea(float a, float b, float c)
{
  float s = (a + b + c) / 2;
  float area = sqrt(s * (s - a) * (s - b) * (s - c));
  return area;
}

float calculatePerimeter(float a, float b, float c)
{
  float perimeter = a + b + c;
  return perimeter;
}
