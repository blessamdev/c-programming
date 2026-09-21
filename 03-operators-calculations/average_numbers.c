/*
Author: Blessam
Date: 21st September 2026
*/

#include <stdio.h>
int main(){
	float number1;
	float number2;
	float number3;
	float number4;
	float Average;
	
	printf("Enter the numbers.\n");
	
	printf("Enter Number 1.\t");
	scanf("%f",&number1);
	
	printf("Enter Number 2.\t");
	scanf("%f",&number2);
	
	printf("Enter Number 3.\t");
	scanf("%f",&number3);
	
	printf("Enter Number 4.\t");
	scanf("%f",&number4);
	
	Average =(number1+number2+number3+number4)/4;
	
	printf("The details.\n");
	printf("Number 1: %.2f.\n",number1);
    printf("Number 2: %.2f.\n",number2);
    printf("Number 3: %.2f.\n",number3);
    printf("Number 4: %.2f.\n",number4);
    printf("Average: %.2f.\n",Average);
    
    return 0;
}
