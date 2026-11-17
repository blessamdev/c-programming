#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define NAME_MAX_LEN 50
#define INPUT_BUF_LEN 128
#define ACCOMMODATION_COST_PER_DAY 2500.0f

typedef struct {
    int id;
    char name[NAME_MAX_LEN];
    int age;
    float temperature_c;
    int days_admitted;
} Patient;

static int read_line(const char *prompt, char *buffer, size_t size) {
    while (1) {
        printf("%s", prompt);
        if (!fgets(buffer, (int)size, stdin)) {
            return 0;
        }
        buffer[strcspn(buffer, "\r\n")] = '\0';

        /* Trim leading whitespace */
        char *start = buffer;
        while (*start && isspace((unsigned char)*start)) {
            start++;
        }
        if (start != buffer) {
            memmove(buffer, start, strlen(start) + 1);
        }

        if (buffer[0] != '\0') {
            return 1;
        }
        printf("  Input cannot be empty. Please try again.\n");
    }
}

static int read_positive_int(const char *prompt, int min_val, int max_val, int *out) {
    char buf[INPUT_BUF_LEN];
    long val;
    char extra;

    while (1) {
        if (!read_line(prompt, buf, sizeof(buf))) {
            return 0;
        }
        if (sscanf(buf, "%ld %c", &val, &extra) == 1 && val >= min_val && val <= max_val) {
            *out = (int)val;
            return 1;
        }
        printf("  Enter a whole number between %d and %d.\n", min_val, max_val);
    }
}

static int read_float(const char *prompt, float min_val, float max_val, float *out) {
    char buf[INPUT_BUF_LEN];
    float val;
    char extra;

    while (1) {
        if (!read_line(prompt, buf, sizeof(buf))) {
            return 0;
        }
        if (sscanf(buf, "%f %c", &val, &extra) == 1 && val >= min_val && val <= max_val) {
            *out = val;
            return 1;
        }
        printf("  Enter a valid number between %.1f and %.1f.\n", min_val, max_val);
    }
}

static const char *temperature_status(float temp_c) {
    if (temp_c < 35.0f) {
        return "Hypothermia (Review urgently)";
    }
    if (temp_c >= 37.5f) {
        return "Fever (Monitor closely)";
    }
    return "Normal";
}

static float calculate_accommodation_cost(int days_admitted) {
    return ACCOMMODATION_COST_PER_DAY * (float)days_admitted;
}

static int register_patient(Patient *p) {
    printf("=== HOSPITAL PATIENT REGISTRATION SYSTEM ===\n\n");

    if (!read_positive_int("Enter patient ID number: ", 1, 999999999, &p->id)) {
        return 0;
    }
    if (!read_line("Enter patient full name: ", p->name, sizeof(p->name))) {
        return 0;
    }
    if (!read_positive_int("Enter patient age (years): ", 0, 130, &p->age)) {
        return 0;
    }
    if (!read_float("Enter body temperature (°C): ", 30.0f, 45.0f, &p->temperature_c)) {
        return 0;
    }
    if (!read_positive_int("Enter number of days admitted: ", 0, 3650, &p->days_admitted)) {
        return 0;
    }

    return 1;
}

static void print_patient_summary(const Patient *p) {
    float total_cost = calculate_accommodation_cost(p->days_admitted);

    printf("\n===============================================\n");
    printf("               PATIENT SUMMARY                 \n");
    printf("===============================================\n");
    printf("Patient ID               : %d\n", p->id);
    printf("Patient Name             : %s\n", p->name);
    printf("Patient Age              : %d years\n", p->age);
    printf("Temperature              : %.2f °C (%s)\n",
           p->temperature_c, temperature_status(p->temperature_c));
    printf("Days Admitted            : %d\n", p->days_admitted);
    printf("Daily Rate               : KSh %.2f\n", ACCOMMODATION_COST_PER_DAY);
    printf("Total Accommodation Cost : KSh %.2f\n", total_cost);
    printf("===============================================\n");
}

int main(void) {
    Patient p;

    if (!register_patient(&p)) {
        fprintf(stderr, "Registration cancelled due to input error.\n");
        return 1;
    }

    print_patient_summary(&p);
    return 0;
}
