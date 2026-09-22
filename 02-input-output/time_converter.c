/*
Author: BLESSAM
Date: 22/9/2026
*/

#include <stdio.h>

int main(){
	int hours,minutes,seconds;
	
	printf("Enter the details.\n");
	printf("Enter seconds.\t");
	scanf("%d",&seconds);
	
	//formula
	hours = seconds/3600;
	minutes = seconds/60;
	
	printf("Hours:%d.\n",hours);
	printf("Minutes:%d.\n",minutes);
	printf("Seconds:%d.\n",seconds);
	
	return 0;
	
}
