
#include <stdio.h>

// Write the first employee record
void writeEmployee() {
    FILE *file = fopen("employees.txt", "w");

    if (file == NULL) {
        printf("Error opening file!\n");
        return;
    }

    int id;
    char name[50], department[50];

    printf("Enter Employee ID: ");
    scanf("%d", &id);
    getchar();

    printf("Enter Employee Name: ");
    fgets(name, sizeof(name), stdin);

    printf("Enter Department: ");
    fgets(department, sizeof(department), stdin);

    fprintf(file, "ID: %d\nName: %sDepartment: %s\n",
            id, name, department);

    fclose(file);
    printf("Employee saved successfully!\n");
}

// Read employee records
void readEmployee() {
    FILE *file = fopen("employees.txt", "r");

    if (file == NULL) {
        printf("Error opening file!\n");
        return;
    }

    int ch;

    printf("\n=== Employee Records ===\n");

    while ((ch = fgetc(file)) != EOF) {
        putchar(ch);
    }

    fclose(file);
}

// Append another employee
void appendEmployee() {
    FILE *file = fopen("employees.txt", "a");

    if (file == NULL) {
        printf("Error opening file!\n");
        return;
    }

    int id;
    char name[50], department[50];

    printf("Enter Employee ID: ");
    scanf("%d", &id);
    getchar();

    printf("Enter Employee Name: ");
    fgets(name, sizeof(name), stdin);

    printf("Enter Department: ");
    fgets(department, sizeof(department), stdin);

    fprintf(file, "ID: %d\nName: %sDepartment: %s\n",
            id, name, department);

    fclose(file);
    printf("Employee added successfully!\n");
}

int main() {
    writeEmployee();
    readEmployee();
    appendEmployee();
    readEmployee();

    return 0;
}
