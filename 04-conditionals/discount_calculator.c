/*
Program to compute discount
amount >= 10000, 10% discount
amount between 5000 and 10000, 5% discount
amount below 5000, No discount

*/

#include<stdio.h>

int main(){
	
	float amount;
	float discount;
	float amount_to_pay;
	
	printf("Enter the amount.\n");
	scanf("%f",&amount);
	
	if(amount >= 10000){
		discount = 0.1 * amount;
	    amount_to_pay = amount - discount;
    }
    else if(amount >=5000){
		discount = 0.05 * amount;
	    amount_to_pay = amount - discount;
	}
	else{
		amount_to_pay = amount;
		printf("No discount");
	}
	
	printf("Discount = %.2f.\n",discount);
	printf("Amount to Pay  = %.2f.\n",amount_to_pay);
	
	return 0;
}
