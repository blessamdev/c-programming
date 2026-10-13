/*
Author: Samuel Owino Bless
Date: 10/13/2026
Description: A simple student marks analyzer 
*/

#include <stdio.h>

int calculateTotal(int marks[], int size) {
    int total = 0;
    int i;
    for (i = 0; i < size; i++) {
        total += marks[i];
    }
    return total;
}

int calculateAverage(int total, int size) {
    return total / size;
}

int calculateHighest(int marks[], int size){
    int highest = marks[0];
    int i;
    for(i = 1; i < size; i++){
        if(marks[i] > highest){
            highest = marks[i];
        }
    }
    return highest;
}
int calculateLowest(int marks[], int size){
    int lowest = marks[0];
    int i;
    for(i = 1; i < size; i++){
        if(marks[i] < lowest){
            lowest = marks[i];
        }
    }
    return lowest;
}

int main() {
    int marks[5];
    int size = sizeof(marks) / sizeof(marks[0]);
    int i;

    printf("Enter marks for 5 subjects:\n");
    for (i = 0; i < size; i++) {
        printf("Subject %d: ", i + 1);
        scanf("%d", &marks[i]);
    }

    int total = calculateTotal(marks, size);
    int average = calculateAverage(total, size);
    int highest = calculateHighest(marks, size);
    int lowest = calculateLowest(marks, size);

    printf("\nTotal Marks: %d\n", total);
    printf("Average Marks: %d\n", average);
    printf("Highest Marks: %d\n", highest);
    printf("Lowest Marks: %d\n", lowest);

    return 0;
}