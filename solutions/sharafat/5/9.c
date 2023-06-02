#include <stdio.h>
#include <string.h>

int main() {
   char first[10], middle[3], last[10];
   
   printf("Enter the name in three parts: ");
   scanf("%s %s %s", first, middle, last);
   
   printf("Formatted Name A: %s %s. %s\n", first, middle, last);
   printf("Formatted Name B: %c.%c. %s\n", first[0], middle[0], last);
   printf("Formatted Name C: %s %c.%c.\n", last, first[0], middle[0]);
    
   return 0;
}