#include <stdio.h>

int Total(int a, int b){
    int Sum = a + b;
    return Sum;
}
int Subtraction(int a, int b){
    int Sub = a - b;
    return Sub;
}
int Multiplication(int a, int b){
    int Multiply = a * b;
    return Multiply;
}
float Division(int a, int b){
    float Result = a/b;
    return Result;
}


int main(){
    int x,y;
    int options;

    printf("Enter number1.\n");
    scanf("%d",&x);

    printf("Enter number2.\n");
    scanf("%d",&y);

    printf("Choose an operator: + , -, * , / \n.");
    printf("1. + \n");
    printf("2. - \n");
    printf("3. * \n");
    printf("4. / \n");

    printf("Choose an option: ");
    scanf("%d", &options);

   switch (options) {
    case 1:
        printf("Sum = %d\n", Total(x, y));
        break;

    case 2:
        printf("Subtraction = %d\n", Subtraction(x, y));
        break;

    case 3:
        printf("Multiplication = %d\n", Multiplication(x, y));
        break;

    case 4:
        if (y == 0) {
            printf("Cannot divide by zero!\n");
        } else {
            printf("Division = %d\n", Division(x, y));
        }
        break;

    default:
        printf("Invalid option!\n");
        break;
}
    return 0;

}

