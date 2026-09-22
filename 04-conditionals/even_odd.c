/*
Author: BLESSAM
Date: 22/9/2026
*/

#include <stdio.h>

int main(){
	int number;
	
	printf("Enter the number.\t");
	scanf("%d",&number);
	
    if (number % 2 == 0){
    printf("%d is even.\n", number);
    }
    else{
    printf("%d is odd.\n", number);
    }
	return 0;
	
}
