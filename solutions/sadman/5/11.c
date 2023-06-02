#include <stdio.h>

int main()
{
    int item_codes[] = {101, 102, 103, 104};
    int quantities[] = {50, 20, 10, 30};
    char *locations[] = {"A2", "B5", "C3", "D1"};
    printf("Inventory Stock Report\n");
    printf("----------------------\n");
    printf("Item Code | Quantity | Location\n");
    printf("--------------------------------\n");
    for (int i = 0; i < 4; i++) {
        printf("%9d | %8d | %s\n", item_codes[i], quantities[i], locations[i]);
    }
}
