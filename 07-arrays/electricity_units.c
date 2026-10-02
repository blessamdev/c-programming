/*
Author: Samuel Owino Bless
Date: 10/2/2026
*/

#include <stdio.h>

int main() {
    float units[10];
    int i;

    // Prompt user and collect input for 10 households
    printf("--- Electricity Units Input ---\n");
    for (i = 0; i < 10; i++) {
        printf("Enter electricity units consumed for Household %d: ", i + 1);
        scanf("%f", &units[i]);
    }

    // Display the results
    printf("\n--- Electricity Consumption Report ---\n");
    for (i = 0; i < 10; i++) {
        printf("Household %d: %.2f units\n", i + 1, units[i]);
    }

    return 0;
}                                             
