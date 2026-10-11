#include <stdio.h>

int main(){  // variable declaration
	
	int first_number;
	char operator;  //operator variable to store the operator
	int second_number;  // variable to store the second number
	int output;   // variable to store the output of the operation
	
	printf("Enter the First Number.\n");  // prompt the user to enter the first number
	scanf("%d",&first_number);  // read the first number from the user input
	
	printf("Enter the Operator.\n"); // prompt the user to enter the operator
	scanf(" %c", &operator);
	
	printf("Enter the Second Number.\n");
	scanf("%d",&second_number);
	
	switch(operator){
		case '+':
			output = first_number + second_number;
			printf("Output:%d.\n",output);
			break;
        case '-':
        	output = first_number - second_number;
			printf("Output:%d.\n",output);
        	break;
	    case '/':
	    	if (second_number == 0) {
            printf("Cannot divide by zero.\n");
            } 
			else {
	    	output = first_number / second_number;
			printf("Output:%d.\n",output);
			}
	    	break;
		case '*':
			output = first_number * second_number;
			printf("Output:%d.\n",output);
			break;
		case '%':
           if (second_number == 0) {
           printf("Cannot divide by zero.\n");
           }
           else {
           output = first_number % second_number;
		   printf("Result = %d\n", output);
    }
    break;
        default:
        	printf("ERROR! TRY AGAIN.\n");
}
    	

	return 0;
}
