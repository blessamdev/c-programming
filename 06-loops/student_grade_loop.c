/*
Author: Bless Samuel
Date: 10/4/2026
Description: A program that repeatedly asks a lecturer to enter a student's mark (0 - 100), validates it, and displays the mark with its grade.
Grading: 80-100 = A, 70-79 = B, 60-69 = C, 50-59 = D, 0-49 = F
*/

#include <stdio.h>

int main() {
    int mark;
    char grade;
    char choice;

    do {
        printf("\nEnter student's mark (0 - 100): ");
        scanf("%d", &mark);

        /* Keep asking until a valid mark is entered */
        while (mark < 0 || mark > 100) {
            printf("Invalid mark! Please enter a mark between 0 and 100: ");
            scanf("%d", &mark);
        }

        if (mark >= 80) {
            grade = 'A';
        }
        else if (mark >= 70) {
            grade = 'B';
        }
        else if (mark >= 60) {
            grade = 'C';
        }
        else if (mark >= 50) {
            grade = 'D';
        }
        else {
            grade = 'F';
        }

        printf("Mark: %d\n", mark);
        printf("Grade: %c\n", grade);

        printf("\nDo you want to enter another student's mark? (y/n): ");
        scanf(" %c", &choice);

    } while (choice == 'y' || choice == 'Y');

    printf("\nProgram ended. Thank you!\n");

    return 0;
}
