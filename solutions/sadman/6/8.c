#include <stdio.h>

int main()
{
    int item_price, item_type;
    float net_price;

    printf("Enter Item Type (1-> Cloth, 2-> Handloom): ");
    scanf("%d", &item_type);

    printf("Enter Item Price: ");
    scanf("%d", &item_price);

    switch (item_type)
    {
    case 1:
        if (item_price >= 0 && item_price <= 100)
            net_price = item_price;
        else if (item_price >= 101 && item_price <= 200)
            net_price = item_price - (item_price * 5.0) / 100;
        else if (item_price >= 201 && item_price <= 300)
            net_price = item_price - (item_price * 7.5) / 100;
        else if (item_price >= 301)
            net_price = item_price - (item_price * 10.0) / 100;
        else
            printf("Invalid item price.\n");
        break;

    case 2:
        if (item_price >= 0 && item_price <= 100)
            net_price = item_price - (item_price * 5.0) / 100;
        else if (item_price >= 101 && item_price <= 200)
            net_price = item_price - (item_price * 7.5) / 100;
        else if (item_price >= 201 && item_price <= 300)
            net_price = item_price - (item_price * 10.0) / 100;
        else if (item_price >= 301)
            net_price = item_price - (item_price * 15.0) / 100;
        else
            printf("Invalid item price.\n");
        break;

    default:
        printf("Invalid item type.\n");
        break;
    }

    if (item_type == 1 || item_type == 2)
        printf("Net Amount of item: %.2f Tk\n", net_price);

    return 0;
}
