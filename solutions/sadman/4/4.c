#include <stdio.h>
int main()
{
    int purchase_price, service_year, salvage_value, depreciation;
    printf("ID:2102020\n");
    printf("Enter Price of Item: ");
    scanf("%d", &purchase_price);
    printf("Enter Years of Service: ");
    scanf("%d", &service_year);
    printf("Enter Annual Depreciation(%): ");
    scanf("%d", &depreciation);
    depreciation = (purchase_price - salvage_value) / service_year;
    printf("Salvage value Of that Item is : %d\n", salvage_value);
}