/*
Author: Blessam
Date: 21-09-2026
*/

#include <stdio.h>

int main(){
	float temperature;
	float Kelvin;
	float Fahrenheit;
	
	printf("Enter the temperature in celcius.\n");
	scanf("%f",&temperature);
	
	Kelvin = temperature + 273.15;
    Fahrenheit = (temperature * 9/5) + 32;
	
	printf("Temperature: %.2f Celcius.\n",temperature);
	printf("Temperature: %.2f K.\n",Kelvin);
	printf("Temperature: %.2f Fahrenheit.\n",Fahrenheit);

	
	return 0;
}
