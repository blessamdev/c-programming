#include <stdio.h>

int main() {
    double balance = 5000;
    double amount;
    int option;

    printf("\n============================\n");
    printf("_________SIMPLE ATM__________\n");
    printf("============================\n\n");

    do {
        printf("\n1. Check Balance\n");
        printf("2. Deposit Money\n");
        printf("3. Withdraw Money\n");
        printf("4. Exit\n");

        printf("Choose an option: ");
        scanf("%d", &option);

        switch (option) {
            case 1:
                printf("Your current balance is KSh %.2f.\n", balance);
                break;

            case 2:
                printf("Enter amount to deposit: ");
                scanf("%lf", &amount);

                if (amount <= 0) {
                    printf("Invalid amount!\n");
                } else {
                    balance += amount;
                    printf("Deposit successful!\n");
                    printf("New balance: KSh %.2f\n", balance);
                }
                break;

            case 3:
                printf("Enter amount to withdraw: ");
                scanf("%lf", &amount);

                if (amount <= 0) {
                    printf("Invalid amount!\n");
                } else if (amount > balance) {
                    printf("Insufficient balance!\n");
                } else {
                    balance -= amount;
                    printf("Withdrawal successful!\n");
                    printf("New balance: KSh %.2f\n", balance);
                }
                break;

            case 4:
                printf("Goodbye!\n");
                break;

            default:
                printf("Invalid choice! Please select an option from 1 to 4.\n");
                break;
        }

    } while (option != 4);

    return 0;
}
