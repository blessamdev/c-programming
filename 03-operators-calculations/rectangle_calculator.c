/*
Author: Blessam
Date: 21st September 2026
*/

#include <stdio.h>
int main(){
	float length;
	float width;
	float perimeter;
	float area;
	
	printf("Enter the rectangle details.\n");
	printf("Enter the length.\n");
	scanf("%f",&length);
	
	printf("Enter the width.\n");
	scanf("%f",&width);
	
	perimeter = 2*(length + width);
	area = (length * width);
	
	printf("Perimeter:%.2f.\n",perimeter);
	printf("Area:%.2f.\n",area);
	
	return 0;
}
