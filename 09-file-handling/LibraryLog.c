/*
Author: Blessam
Date: 11/4/2026
*/
#include <stdio.h>
#include <string.h>

int main() {
    FILE *file;
    char title[150];
    char choice[10];

    printf("=== Library Borrowed Books Tracker ===\n\n");

    while (1) {
        
        file = fopen("borrowed_books.txt", "a");
        if (file == NULL) {
            printf("Error: Could not open file for writing.\n");
            return 1;
        }

        printf("Enter the title of the borrowed book: ");
        if (fgets(title, sizeof(title), stdin) != NULL) {
            
            title[strcspn(title, "\n")] = 0;

            
            if (strlen(title) > 0) {
                
                fprintf(file, "%s\n", title);
                fclose(file);
                
                
                printf("Confirmation: \"%s\" was successfully stored in borrowed_books.txt.\n", title);
            } else {
                fclose(file);
                printf("Error: Book title cannot be empty. Please try again.\n");
                continue;
            }
        }
      
        printf("Do you want to enter another title? (y/n): ");
        if (fgets(choice, sizeof(choice), stdin) != NULL) {
            choice[strcspn(choice, "\n")] = 0;
            if (choice[0] != 'y' && choice[0] != 'Y') {
                break;
            }
        }
        printf("\n");
    }

    printf("\nExiting program. All records have been saved successfully.\n");
    return 0;
}
