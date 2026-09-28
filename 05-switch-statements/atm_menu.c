/*
Author: BLESSAM
Date: 9.28.2026
*/

#include <stdio.h>

int main(){
	
	int option;
	int deposit_money;
	int withdrawal_money;
	int balance = 2000;
	
	printf("ATM MONEY.......\n");
	printf(" 1. Check Balance. \n");
	printf(" 2. Deposit Money. \n");
	printf(" 3. Withdraw Money. \n");
	printf(" 4. Exit. \n");
	
	printf("Select an option.\t");
	scanf("%d",&option);
	
	switch(option){
	case 1:
        printf("Your current balance is KSHS%d",balance);
		break;
	case 2:
		printf("2. Deposit Money. \n");
		
		printf(" Enter amount to deposit.\n");
		scanf("%d",&deposit_money);
		
		balance = balance + deposit_money;
		
		printf("Deposit of Ksh %d.\t",deposit_money);
		printf("Updated Balance: Ksh %d.\t",balance);
		break;
	case 3:
	    printf("3. Withdraw Money. \n");
	    
		printf("Enter amount to withdraw.\n");
		scanf("%d",&withdrawal_money);
		
		balance = balance - withdrawal_money;
		
		if(withdrawal_money <= balance){
			printf("Withdrawal of KSHS %d successful.\n",withdrawal_money);
			printf("New balance: Kshs %d.\n",balance);
		}
        else{
		    printf("Insufficient funds.\n");
		}
	    break;
	case 4:
		printf("4. Exit. \n");
		break;
	default:
		printf("Invalid Input!\n");
		break;
	}
	
	return 0;
}
