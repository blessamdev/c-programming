/* 
Author: Blessam
Date: 10-12-2026
Description: Function to calculate electric bill 
*/

#include <stdio.h>

double calculateElectricBills(int units) {
    double billAmount;
    
    if (units <= 100) {
        billAmount = units * 10; // KSh. 10 per unit for the first 100 units
    }else if(units <= 200){
        billAmount = units * 15; // KSh. 15 per unit for the next 100 units
    }else{
        billAmount = units * 20; // KSh. 20 per unit for units above 200
    }

    return billAmount;
}

int main() {
    int units;
    printf("Enter the number of units consumed: ");
    scanf("%d", &units);
    printf("The electric bill is: KSh. %.2f\n", calculateElectricBills(units));
    return 0;
}