/*
Author: BLESSAM
Date: 22/9/2026
*/

#include <stdio.h>

int main(){
	int marks;
	char grade;
	
	printf("Enter your marks.\n");
	scanf("%d",&marks);
	
	if(marks >= 70){
	   grade = 'A';
	}
	else if(marks >= 60){
		grade = 'B';
	}
	else if(marks >=50){
		grade = 'C';
	}
	else if(marks >=40){
		grade = 'D';	
	}
	else
	{
		grade = 'F';
	}
	
	printf("My grade is %c.\n",grade);
	
	   return 0;

}
