/*
Author: Blessam
Date: 10/8/2026
Description: A C program that calculates an electricity bill
based on the number of units consumed.
*/

#include <stdio.h>

int main() {
    int units;
    int rate;
    float totalBill;
    float averageCost;

    printf("Enter the number of electricity units consumed: ");
    scanf("%d", &units);

    if (units <= 0) {
        printf("Invalid number of units.\n");
    }
    else {
        if (units > 200) {
            rate = 25;
        }
        else if (units >= 101) {
            rate = 20;
        }
        else if (units >= 51) {
            rate = 15;
        }
        else {
            rate = 10;
        }

        totalBill = units * rate;
        averageCost = totalBill / units;

        printf("\n===== Electricity Bill =====\n");
        printf("Units consumed: %d\n", units);
        printf("Rate per unit: KSh %d\n", rate);
        printf("Total bill: KSh %.2f\n", totalBill);
        printf("Average cost per unit: KSh %.2f\n", averageCost);
    }

    return 0;
}
