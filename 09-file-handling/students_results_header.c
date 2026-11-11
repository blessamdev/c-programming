
#include <stdio.h>

// Structure must match the writer program
struct Student {
    char name[50];
    char reg_no[30];
    float total_marks;
};

int main() {
    FILE *file;
    struct Student s;

    // Open binary file in read mode
    file = fopen("results.dat", "rb");

    if (file == NULL) {
        printf("Error: Could not open results.dat\n");
        return 1;
    }

    printf("=== Student Examination Results ===\n\n");

    printf("%-30s %-20s %-15s\n",
           "Student Name", "Registration No", "Total Marks");

    printf("-----------------------------------------------------------------\n");

    // Read student records one at a time
    while (fread(&s, sizeof(struct Student), 1, file) == 1) {
        printf("%-30s %-20s %-15.2f\n",
               s.name, s.reg_no, s.total_marks);
    }

    fclose(file);

    return 0;
}
