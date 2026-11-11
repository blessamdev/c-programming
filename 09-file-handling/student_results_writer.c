/*
Author: Blessam
Date: 04/11/2026
Description: Program to read & write student results to a file
*/


#include <stdio.h>

// Structure to store student information
struct Student {
    char name[50];
    char reg_no[30];
    float total_marks;
};

int main() {
    FILE *file;
    struct Student s;

    // Open binary file in write mode
    file = fopen("results.dat", "wb");

    if (file == NULL) {
        printf("Error: Could not create results.dat\n");
        return 1;
    }

    printf("=== Student Registration ===\n\n");

    printf("Enter student name: ");
    scanf(" %49[^\n]", s.name);

    printf("Enter registration number: ");
    scanf(" %29s", s.reg_no);

    printf("Enter total marks: ");
    scanf("%f", &s.total_marks);

    // Write student record into binary file
    fwrite(&s, sizeof(struct Student), 1, file);

    fclose(file);

    printf("\nStudent record saved successfully!\n");

    return 0;
}
