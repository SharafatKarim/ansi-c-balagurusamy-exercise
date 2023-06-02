#include <stdio.h>
int main()
{
  int first, second, third;
  printf("ID:2102020\n");
  printf("Enter Three Numbers: ");
  scanf("%d %d %d", &first, &second, &third);
  printf("Largest Number is : ");
  if (first > second)
  {
    if (first > third)
      printf("%d\n", first);
    else
      printf("%d\n", third);
  }
  else
  {
    if (second > third)
      printf("%d\n", second);
    else
      printf("%d\n", third);
  }
}