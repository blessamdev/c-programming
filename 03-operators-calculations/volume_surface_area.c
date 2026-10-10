/*
Author: Samuel Owino Bless
Admission Number: BCS-05-0065/2026
Date: 18th September 2026
*/

#include <stdio.h>
#define PI 3.142   //Defining the value of PI constant

int main(){
	float radius;  //Declaring the variables in the program
	float height;  //Declaring the variables
	float volume;  //Declaring the variables
	float surfacearea;  //Declaring the variables
	
	printf("Enter the radius of the cylinder.\t");
	scanf("%f",&radius);
	
	printf("Enter the height of the cylinder.\t");
	scanf("%f",&height);
	
	volume = PI*radius*radius*height; //Calculating the volume of the cylinder
	surfacearea = 2*PI*radius*radius + 2*PI*radius*height; //Calculating the surface area of the cylinder
	
	printf("The volume is %.2f\n", volume); //Printing the volume of the cylinder
    printf("The surface area is %.2f\n", surfacearea); //Printing the surface area of the cylinder


	return 0;
	
}
