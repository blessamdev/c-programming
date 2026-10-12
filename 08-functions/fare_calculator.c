/*
Author: Blessam
DATE: 10-12-2026
Description: A simple fare calculator for a transportation service
*/

#include <stdio.h>

int fare_calculator(int distance) {
    int rate_per_km = 50;
    return distance * rate_per_km;
}

int main() {
    int distance;

    printf("Enter the distance that you traveled in kilometers: \t");
    scanf("%d", &distance);
    printf("The total fare for the travelled distance is: %d\n", fare_calculator(distance));
    return 0;
}