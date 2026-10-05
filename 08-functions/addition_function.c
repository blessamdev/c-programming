#include <stdio.h>

int add(int number1, int number2, int number3){ 
int result = number1 + number2 + number3;
return result;
}


int main() {
    int number1;
    int number2;
    int number3;
    int result;

    printf("Enter NUMBER1: ");
    scanf("%d", &number1);

    printf("Enter NUMBER2: ");
    scanf("%d", &number2);
    
    printf("Enter NUMBER3: ");
    scanf("%d", &number3);

    result = add(number1, number2,number3);

    printf("The sum of the numbers: %d, %d and %d = %d.\n",number1, number2, number3, result);

return 0;
}
