/*
 * Name: Owino Samuel Bless
 * Date: October 8, 2026
 * Description: Program to calculate the diagonal length of a rectangular
 *              window using the Pythagorean theorem with built-in math functions.
 * Course: Computer Science
 * Language: C (GCC)
 */

#include <stdio.h>
#include <math.h>

int main() {
    double length, width, diagonal;

    printf("Enter length: ");
    scanf("%lf", &length);

    printf("Enter width: ");
    scanf("%lf", &width);


    diagonal = sqrt(pow(length, 2) + pow(width, 2));


    printf("\nLength: %.2f\n", length);
    printf("Width: %.2f\n", width);
    printf("Diagonal: %.2f\n", diagonal);

    return 0;
}
