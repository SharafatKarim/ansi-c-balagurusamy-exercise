#include <stdio.h>

struct Product
{
    int code;
    float cost;
    int quantity;
};

int append_data()
{
    FILE *fp;
    fp = fopen("products.txt", "a");
    struct Product products;
    printf("\nEnter product code: ");
    scanf("%d", &products.code);
    printf("Enter product cost: ");
    scanf("%f", &products.cost);
    printf("Enter product quantity: ");
    scanf("%d", &products.quantity);
    fprintf(fp, "%d %f %d\n", products.code, products.cost, products.quantity);
    fclose(fp);
    return 0;
}

int filter_with_code(int code)
{
    FILE *fp;
    fp = fopen("products.txt", "r");
    struct Product products[5];
    int i = 0;
    while (!feof(fp))
    {
        fscanf(fp, "%d %f %d", &products[i].code, &products[i].cost, &products[i].quantity);
        if (products[i].code == code)
        {
            printf("%d %f %d\n", products[i].code, products[i].cost, products[i].quantity);
        }
        i++;
    }
    fclose(fp);
    return 0;
}

int main()
{
    printf("1. Append data\n");
    printf("2. Filter with code\n");
    printf("Enter choice: ");
    int choice;
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        append_data();
        break;
    case 2:
        printf("Enter code: ");
        int code;
        scanf("%d", &code);
        filter_with_code(code);
        break;
    default:
        printf("Invalid choice\n");
        break;
    }
    return 0;
}