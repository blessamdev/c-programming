/*
Author: Blessam
Date: 10/8/2026
Description: A C program that calculates the distance between two points
using the distance formula, pow(), and sqrt().
*/

#include <stdio.h>
#include <math.h>

int main(){

    float X1,Y1,X2,Y2,Distance;

    printf("X1 = \t");
    scanf("%f",&X1);

    printf("Y1 = \t");
    scanf("%f",&Y1);

    printf("X2 = \t");
    scanf("%f",&X2);

    printf("Y2 = \t");
    scanf("%f",&Y2);

    Distance = sqrt(pow(X2 - X1, 2) + pow(Y2 - Y1, 2));

    printf("\n=====Output=====\n");
    printf("X1 = %.2f.\n",X1);
    printf("Y1 = %.2f.\n",Y1);
    printf("X2 = %.2f.\n",X2);
    printf("Y2 = %.2f.\n",Y2);

    printf("The calculated distance is %.2f.\n",Distance);

    return 0;
}




