#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int chain[3][5][10];
    int total_chain_occupied = 0;

    // Seed the random number generator
    srand(time(NULL));

    printf("=== Room Occupancy (Multiple Branches) ===\n\n");

    // Iterate through 3 branches, 5 floors, and 10 rooms
    for (int branch = 0; branch < 3; branch++) {
        int branch_occupied = 0;

        for (int floor = 0; floor < 5; floor++) {
            for (int room = 0; room < 10; room++) {
                chain[branch][floor][room] = rand() % 2; // Assign random occupancy (0 or 1)

                if (chain[branch][floor][room] == 1) {
                    branch_occupied++;
                    total_chain_occupied++;
                }
            }
        }
        printf("Branch %d Total Occupied Rooms: %d\n", branch + 1, branch_occupied);
    }

    printf("\n----------------------------------------------------\n");
    printf("Total Occupied Rooms Across All Branches: %d\n", total_chain_occupied);
    printf("----------------------------------------------------\n");

    return 0;
}