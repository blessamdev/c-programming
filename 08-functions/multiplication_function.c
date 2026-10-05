#include <stdio.h>

int multiply(int number1, int number2){ 
int Result = number1 * number2;
return Result;
}


int main() {
    int number1;
    int number2;
    int result;

    printf("Enter NUMBER1: ");
    scanf("%d", &number1);

    printf("Enter NUMBER2: ");
    scanf("%d", &number2);

    result = multiply(number1, number2);

    printf("The multiplication of %d and %d = %d.\n",number1, number2, result);

return 0;
}
