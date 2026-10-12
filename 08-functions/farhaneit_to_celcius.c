/*
Author: Blessam
Date: 12-October-2026
Description: A simple converter from Fahrenheit to Celsius
*/

#include <stdio.h>

float celcius(float fahrenheit){
    return (fahrenheit - 32) * 5 / 9;
}
int main(){
    float fahrenheit;
    printf("The temperature in Fahrenheit is: \n");
    scanf("%f", &fahrenheit);
    printf("The temperature in Celsius = %.2f\n", celcius(fahrenheit));
    return 0;
}