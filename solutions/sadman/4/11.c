#include <stdio.h>

int main()
{
  int m, n;
printf("ID:2102020\n");
  printf("Enter Value of M and N(N>M): ");
  scanf("%d %d", &m, &n);
  if (n % m == 0)
    printf("%d is Multipler of %d", m, n);
  else
    printf("%d is Not Multipler of %d", m, n);

  return 0;
}