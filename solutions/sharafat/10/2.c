#include <stdio.h>

void space(int x) {
  for (int i = 0; i < x; i++) {
    printf(" ");
  }
}

int main() {
  printf("123");
  space(3);
  printf("456\n");
  return 0;
}
