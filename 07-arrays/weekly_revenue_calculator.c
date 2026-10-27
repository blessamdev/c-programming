/*
Author: Blessam
Date: 27/10/2026
Description: A C program that records daily revenue for seven days and calculates the total, average, and highest daily revenue.
*/

#include <stdio.h>

int main(){

    int i;
    float revenue[7];
    float total_revenue = 0.0;
    float average_revenue = 0.0;

    printf("__===__WEEKLY REVENUE___===___\n");

    for(i = 0; i < 7; i++){
        printf("Enter the revenue of Day %d: ", i + 1);
        scanf("%f", &revenue[i]);
        total_revenue += revenue[i];
    }

    average_revenue = total_revenue / 7.0;

    printf("\n--- Revenue Summary ---\n");
    printf("Total Weekly Revenue: Kshs%.2f\n", total_revenue);
    printf("Average Daily Revenue: Kshs%.2f\n", average_revenue);

    return 0;
}