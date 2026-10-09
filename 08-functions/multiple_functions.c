#include <stdio.h>

int add(int a, int b) {
    return a + b;
}

// Returns 1 if even, 0 if odd
int isEven(int n) {
    return n % 2 == 0;
}

float celsiusToFahrenheit(float c) {
    return c * 9.0 / 5.0 + 32;
}

int main() {
    int c, d, x;
    float temp;

    printf("Enter two numbers to add: \n");
    scanf("%d %d", &c, &d);

    printf("Enter a number to check even/odd: \n");
    scanf("%d", &x);

    printf("Enter temperature in Celsius: ");
    scanf("%f", &temp);

    printf("\n--- Results ---\n");
    printf("Sum = %d\n", add(c, d));


    if (isEven(x)) {
        printf("%d is even.\n", x);
    } else {
        printf("%d is odd.\n", x);
    }

    printf("Temperature in Fahrenheit: %.2f°F\n", celsiusToFahrenheit(temp));

    return 0;
}
