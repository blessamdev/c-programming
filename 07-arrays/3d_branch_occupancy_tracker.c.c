/*
Author: Blessam
Date: 27/10/2026
Description: 3D Array - Multiple Branches Room Occupancy Tracker (Manual Input)
*/

#include <stdio.h>

int main() {
    // 3 branches, 5 floors, 10 rooms per floor
    int chain[3][5][10];
    int total_occupied = 0;

    printf("=== HOTEL CHAIN OCCUPANCY TRACKER (3D ARRAY) ===\n");
    printf("Enter 1 for Occupied or 0 for Vacant for each room.\n\n");

    // Loop through each branch
    for (int branch = 0; branch < 3; branch++) {
        printf("=== BRANCH %d ===\n", branch + 1);
        
        // Loop through each floor
        for (int floor = 0; floor < 5; floor++) {
            printf("--- Floor %d ---\n", floor + 1);
            
            // Loop through each room
            for (int room = 0; room < 10; room++) {
                printf("Room %d status (0/1): ", room + 1);
                scanf("%d", &chain[branch][floor][room]);

                // Count if the room is occupied
                if (chain[branch][floor][room] == 1) {
                    total_occupied++;
                }
            }
            printf("\n");
        }
    }

    printf("----------------------------------------------------\n");
    printf("Total Occupied Rooms Across All Branches: %d\n", total_occupied);
    printf("----------------------------------------------------\n");

    return 0;
}