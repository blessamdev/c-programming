
/*
Author: BLESSAM
Date: 22/9/2026
*/

#include <stdio.h>

int main() {
    int hours, minutes, seconds;
    int remainingSeconds;

    printf("Enter the total seconds: ");
    scanf("%d", &seconds);

    hours = seconds / 3600;
    minutes = (seconds % 3600) / 60;
    remainingSeconds = seconds % 60;

    printf("Hours: %d\n", hours);
    printf("Minutes: %d\n", minutes);
    printf("Seconds: %d\n", remainingSeconds);

    return 0;
}
