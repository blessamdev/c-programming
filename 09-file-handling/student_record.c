
#include <stdio.h>

// Save the first student
void saveStudent() {
    FILE *file = fopen("students.txt", "w");

    if (file == NULL) {
        printf("Error opening file!\n");
        return;
    }

    char admission[50], name[100], course[100];

    printf("Enter Admission Number: ");
    scanf("%49s", admission);
    getchar();

    printf("Enter Full Name: ");
    fgets(name, sizeof(name), stdin);

    printf("Enter Course: ");
    fgets(course, sizeof(course), stdin);

    fprintf(file, "Admission: %s\nName: %sCourse: %s\n",
            admission, name, course);

    fclose(file);
    printf("Student saved successfully!\n\n");
}

// Display student records
void displayStudents() {
    FILE *file = fopen("students.txt", "r");

    if (file == NULL) {
        printf("Error opening file!\n");
        return;
    }

    int ch;

    printf("\n=== Student Records ===\n");

    while ((ch = fgetc(file)) != EOF) {
        putchar(ch);
    }

    fclose(file);
}

// Add another student
void addStudent() {
    FILE *file = fopen("students.txt", "a");

    if (file == NULL) {
        printf("Error opening file!\n");
        return;
    }

    char admission[50], name[100], course[100];

    printf("Enter Admission Number: ");
    scanf("%49s", admission);
    getchar();

    printf("Enter Full Name: ");
    fgets(name, sizeof(name), stdin);

    printf("Enter Course: ");
    fgets(course, sizeof(course), stdin);

    fprintf(file, "Admission: %s\nName: %sCourse: %s\n",
            admission, name, course);

    fclose(file);
    printf("Student added successfully!\n");
}

int main() {
    saveStudent();
    displayStudents();
    addStudent();
    displayStudents();

    return 0;
}
