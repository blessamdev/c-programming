#include <stdio.h>
#include <string.h>

int main() {
    
    struct Patient {
        int id;
        char name[50];
        int age;
        float temperature;
        int no_of_days_admitted;
    };
    
    
    struct Patient p;

    printf("=== HOSPITAL PATIENT REGISTRATION SYSTEM ===\n");

    
    printf("Enter the patient's ID number: ");
    scanf("%d", &p.id);
    getchar(); 

    printf("Enter the patient's name: ");
    fgets(p.name, sizeof(p.name), stdin);
    p.name[strcspn(p.name, "\n")] = 0; 
    printf("Enter his/her age: ");
    scanf("%d", &p.age);

    printf("Enter the patient's temperature: ");
    scanf("%f", &p.temperature);

    printf("Enter the number of days the patient has been admitted: ");
    scanf("%d", &p.no_of_days_admitted);

   
    int accommodation_cost_per_day = 2500;
    float total_cost = accommodation_cost_per_day * p.no_of_days_admitted;

    printf("\n===========================================\n");
    printf("              PATIENT DETAILS              \n");
    printf("===========================================\n");
    printf("Patient ID                  : %d\n", p.id);
    printf("Patient Name                : %s\n", p.name);
    printf("Patient Age                 : %d years\n", p.age);
    printf("Patient Temperature         : %.2f\n", p.temperature);
    printf("Number of days admitted     : %d\n", p.no_of_days_admitted);
    printf("Total Accommodation Cost    : KSh %.2f\n", total_cost);
    printf("===========================================\n");

    return 0;
}