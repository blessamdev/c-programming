/*
Author: Samuel Owino Bless
Adm No: BCS-05-0065/2026
Date: 9.26.2026
Description: A program that will calculate or rather acts as a water bill calculator
*/

#include <stdio.h>

int main(){
	
	float numberofwaterunits;
	float totalbill;
	
	printf("Enter the number of water units consumed.\t");
	scanf("%f",&numberofwaterunits);
	
	if(numberofwaterunits >= 60){
		totalbill = numberofwaterunits * 30;
	}
	else if(numberofwaterunits >= 30){
		totalbill = numberofwaterunits * 25;
	}
	else
	{
		totalbill = numberofwaterunits * 20;
	}
	
	printf("Units of water consumed: %.2f.\n",numberofwaterunits);
	printf("Total water bill: %.2f KES.\n",totalbill);
	
	return 0;
	
}


