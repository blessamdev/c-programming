/*
Author: Samuel Owino Bless
Admission Number: BCS-05-0065/2026
Date: 18th September 2026
*/

#include <stdio.h>
#define PI 3.142

int main(){
	float radius;
	float height;
	float volume;
	float surfacearea;
	
	printf("Enter the radius of the cylinder.\t");
	scanf("%f",&radius);
	
	printf("Enter the height of the cylinder.\t");
	scanf("%f",&height);
	
	volume = PI*radius*radius*height;
	surfacearea = 2*PI*radius*radius + 2*PI*radius*height;
	
	printf("The volume is %.2f\n", volume);
    printf("The surface area is %.2f\n", surfacearea);


	return 0;
	
}
