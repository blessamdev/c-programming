/*
Author: Bless Samuel
Date: 10/4/2026
*/


#include <stdio.h>

int main() {
    double balance = 50000;
    double amount;

    printf("Welcome to the ATM\n");
    printf("Current balance: KSh %.2f\n", balance);

    printf("\nEnter withdrawal amount (0 to stop): KSh ");
    scanf("%lf", &amount);

 
    while (amount != 0 && amount <= balance) {
        if (amount < 0) {
            printf("Invalid amount. Please enter a positive value.\n");
        } else {
            balance = balance - amount;
            printf("Withdrawal successful. Remaining balance: KSh %.2f\n", balance);
        }

        printf("\nEnter withdrawal amount (0 to stop): KSh ");
        scanf("%lf", &amount);
    }

    if (amount > balance) {
        printf("\nInsufficient funds! You tried to withdraw more than your balance.\n");
    }

    printf("Final balance: KSh %.2f\n", balance);
    printf("Thank you for using our ATM. Goodbye!\n");

    return 0;
}
