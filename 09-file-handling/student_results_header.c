/*
Author: Blessam
Date: 04/11/2026
Description: Program to read & write student results to a file
*/

#include <stdio.h>

struct Student {
    char name[50];
    char reg_no[30];
    float total_marks;
};

int main() {
    FILE *file;
    struct Student s;

    file = fopen("results.dat", "rb");
    if (file == NULL) {
        printf("Error: Could not open file 'results.dat'. Please ensure the file exists.\n");
        return 1;
    }

    printf("=== Student Examination Results ===\n\n");
    printf("%-30s %-15s\n", "Student Name", "Total Marks");
    printf("---------------------------------------------\n");


    while (fread(&s, sizeof(struct Student), 1, file) == 1) {
        printf("%-30s %-15.2f\n", s.name, s.total_marks);
    }

    
    fclose(file);
    return 0;
}