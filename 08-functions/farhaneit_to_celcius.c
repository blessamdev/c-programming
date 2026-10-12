/*
Author: Blessam
Date: 12-October-2026
Description: A simple converter from Fahrenheit to Celsius
*/

#include <stdio.h>

float celcius(float fahrenheit){
    return (fahrenheit - 32) * 5 / 9;
}
float fahrenheit(float celcius){
    return (celcius * 9 / 5) + 32;
}

int main(){
    float fahrenheit_value, celsius_value;

    printf("The temperature in Fahrenheit is: \n");
    scanf("%f", &fahrenheit_value);

    printf("The temperature in Celcius is: \n");
    scanf("%f", &celsius_value);


    celsius_value = celcius(fahrenheit_value);
    printf("The temperature in Celsius = %.2f\n", celsius_value);
    printf("The temperature in Fahrenheit = %.2f\n", fahrenheit(celsius_value));

    return 0;
}