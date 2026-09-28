#include <stdio.h>

int main(){
	
	int first_number;
	char operator;
	int second_number;
	int output;
	
	printf("Enter the First Number.\n");
	scanf("%d",&first_number);
	
	printf("Enter the Operator.\n");
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
