#include <stdio.h>

int max(int a, int b, int c) {
    int biggest = a;
    if (b > biggest) biggest = b;
    if (c > biggest) biggest = c;
    return biggest;
}
int factorial(int n) {
    int result = 1;
    for (int i = 1; i <= n; i++) {
        result = result * i;
    }
    return result;
}


int main() {
    int x, y, z, num;

    printf("Input the numbers:\n");
    scanf("%d %d %d", &x, &y, &z);

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("The biggest number is %d\n", max(x, y, z));


    if (num < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        printf("Factorial of %d = %d\n", num, factorial(num));
    }



    return 0;
}
