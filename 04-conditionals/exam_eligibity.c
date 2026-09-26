/*
Author: Samuel Owino Bless
Adm No: BCS-05-0065/2026
Date: 9.26.2026
Description: A program that will be able to check if one is eligible to sit for his/her final examination
*/

#include <stdio.h>

int main(){
	
	int attendance;
	float average_marks;
	
	printf("Enter your attendance.\t");
	scanf("%d",&attendance);
	
	printf("Enter your average_marks.\t");
	scanf("%f",&average_marks);
	
	if(attendance >= 75 && average_marks >= 40){
		printf("Eligible for final examination.\n");
	}
	else
	{
		printf("Not eligible for the final examination.\n");
	}
	
	return 0;
}
