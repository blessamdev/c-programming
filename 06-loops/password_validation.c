/*
  Author: Blessam
  Date: October 6, 2026
  Description: A password authentication system that prompts the user 
               for the correct 4-digit PIN using a do-while loop until 
               access is granted.
 */

#include <stdio.h>

int main() {
    int password;

    do {
        printf("Enter password: ");
        scanf("%d", &password);

        if (password != 1234) {
            printf("Incorrect password! Try again.\n\n");
        }
    } while (password != 1234);

    printf("\nAccess Granted\n");

    return 0;
}
