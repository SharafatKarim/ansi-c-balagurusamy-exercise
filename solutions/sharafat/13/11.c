#include <stdio.h>

struct Product
{
    int code;
    char name[20];
    float cost;
    int quantity;
};

int main()
{
    FILE *fp;
    fp = fopen("products.txt", "w");
    struct Product products[5];
    for (int i = 0; i < 5; i++)
    {
        printf("\nEnter product code: ");
        scanf("%d", &products[i].code);
        printf("Enter product name: ");
        scanf("%s", products[i].name);
        printf("Enter product cost: ");
        scanf("%f", &products[i].cost);
        printf("Enter product quantity: ");
        scanf("%d", &products[i].quantity);
        fprintf(fp, "%d %f %d\n", products[i].code, products[i].cost, products[i].quantity);
    }
    fclose(fp);
    return 0;
}