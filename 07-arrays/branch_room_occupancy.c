/*
Author: Blessam
Date: 27/10/2026
Description: Room Occupancy Tracker for a single branch
*/

#include <stdio.h>

int main(){
    int occupancy[5][10];
    int floor;
    int room;

    printf("__ROOM OCCUPANCY TRACKER__\n");
    printf("Enter 1 for Occupied / 0 for Vacant for each room.\n\n");

    for(floor = 0; floor < 5; floor++){
        // Reset counters to 0 at the start of each new floor
        int occupied_count = 0;
        int vacant_count = 0;
        
        printf("---Floor %d---\n", floor + 1);
        for(room = 0; room < 10; room++){
            printf("Room %d status (0/1): ", room + 1);
            scanf("%d", &occupancy[floor][room]);

            if (occupancy[floor][room] == 1){
                occupied_count++;
            } else {
                vacant_count++;
            }
        }
        printf("Floor %d Summary --> Occupied: %d\n", floor + 1, occupied_count);
        printf("Floor %d Summary --> Vacant: %d\n",floor + 1,vacant_count);
    }
    return 0;
}