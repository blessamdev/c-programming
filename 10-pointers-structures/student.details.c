#include <stdio.h>
#include <string.h>

int main(){
    struct student {
        char name[50];
        int age;
        float height;
        float gpa;
        char admission_number[20];
    };
    
    struct student student1, student2;
    
    printf("Enter student name: ");
    scanf("%49s", student1.name); 
    
    printf("Enter student age: ");
    scanf("%d", &student1.age);

    printf("Enter student height: ");
    scanf("%f", &student1.height);

    printf("Enter student GPA: ");
    scanf("%f", &student1.gpa);

    printf("Enter student admission number: ");
    scanf("%19s", student1.admission_number);


    printf("\nStudent Details:\n");
    printf("Name: %s\n", student1.name);
    printf("Age: %d\n", student1.age);
    printf("Height: %.2f\n", student1.height);
    printf("GPA: %.2f\n", student1.gpa);
    printf("Admission Number: %s\n", student1.admission_number);

    return 0;
}
