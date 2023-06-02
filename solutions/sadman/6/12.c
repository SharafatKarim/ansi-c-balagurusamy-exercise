#include <stdio.h>
int main()
{
    float units, bill;
    const float METER_CHARGE = 100.0;
    const float FIRST_200_RATE = 0.8;
    const float NEXT_100_RATE = 0.9;
    const float BEYOND_300_RATE = 1.0;
    const float SURCHARGE_RATE = 0.15;
    printf("Enter the units of electricity consumed: ");
    scanf("%f", &units);
    if (units <= 200)
    {
        bill = units * FIRST_200_RATE;
    }
    else if (units <= 300)
    {
        bill = 200 * FIRST_200_RATE + (units - 200) * NEXT_100_RATE;
    }
    else
    {
        bill = 200 * FIRST_200_RATE + 100 * NEXT_100_RATE + (units - 300) * BEYOND_300_RATE;
    }

    bill += METER_CHARGE;
    if (bill > 400.0)
    {
        bill += bill * SURCHARGE_RATE;
    }
    printf("Electricity bill = Rs. %.2f", bill);
   
}
