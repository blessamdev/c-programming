/*
Author: Samuel Owino Bless
Reg No: BCS-005-0065/2026
Description: A program that collects and displays user details.
Date: September 2026
Version: 1.0
*/

#include <stdio.h>

int main() {
    float height;
    double bank_balance;
    char phone_number[20];

    printf("Enter your height in meters: ");
    scanf("%f", &height);

    printf("Enter your bank balance in Ksh: ");
    scanf("%lf", &bank_balance);

    printf("Enter your phone number: ");
    scanf("%19s", phone_number);

    printf("\n--- User Details ---\n");
    printf("Height: %.2f meters\n", height);
    printf("Bank Balance: Ksh %.2f\n", bank_balance);
    printf("Phone Number: %s\n", phone_number);

    return 0;
}
