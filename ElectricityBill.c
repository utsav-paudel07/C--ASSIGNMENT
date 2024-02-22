#include <stdio.h>

int main() {
    int units;
    float bill;

    printf("Enter the number of units consumed: ");
    scanf("%d", &units);

    if (units <= 20) 
    {
        bill = units * 8;
    } 
    else if (units <= 50) 
    {
        bill = 20 * 8 + (units - 20) * 10;
    } 
    else if (units <= 150) 
    {
        bill = 20 * 8 + 30 * 10 + (units - 50) * 15;
    } else 
    {
        bill = 20 * 8 + 30 * 10 + 100 * 15 + (units - 150) * 20;
    }

    printf("Electricity bill: Rs. %.2f\n", bill);

    return 0;
}
