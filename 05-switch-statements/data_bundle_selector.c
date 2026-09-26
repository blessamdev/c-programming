/*
Author: Blessam
Date: 9.26.2026
*/

#include <stdio.h>

int main(){
	
	int option;
	
	printf("Select data bundle:\n");
	printf("1.100MB @ 50KES.\n");
	printf("2.500MB @ 200KES.\n");
	printf("3.1GB @ 350KES.\n");
	printf("4.2GB @ 600KES.\n");
	
	printf("Select data bundle.\t");
	scanf("%d",&option);
	
    switch(option){
	case 1:
	    printf("100MB @ 50KES.\n");
		break;
	case 2:
		printf("500MB @ 200KES.\n");
		break;
	case 3:
		printf("1GB @ 350KES.\n");
		break;
	case 4:
		printf("2GB @ 600KES.\n");
		break;
	default:
		printf("Invalid choice! Try again.\n");
		break;
	}
	return 0;
}
