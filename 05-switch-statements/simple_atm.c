#include <stdio.h>

int main(){
	
	double balance = 5000;
	double amount;
	int option;
	
	printf("\n============================\n");
	printf("\n_________SIMPLE ATM__________\n");
	printf("\n============================\n");
	
	printf("Your current balance is KSH: %.2f.\n",balance);
	
	do{
	printf(" 1.Check Balance.\n");
    printf(" 2.Deposit Money.\n");
    printf(" 3.Withdraw Money.\n");	
    printf(" 4.Exit.\n");	
    
	
    printf("Choose an option.\t");
    scanf("%d",&option);
    
   
    switch(option){
		case 1:
    printf("Your current balance is Kshs %.2f.\n",balance);
	break;
	   case 2:
    printf("Enter amount to deposit.\t");
    scanf("%lf",&amount);
    
    if(amount <= 0){
    printf("Invalid amount!\n");
    }
    else{
    balance = balance + amount;
    }
    break;
       case 3:
    printf("Enter amount to withdraw.\t");
    scanf("%lf",&amount);
    
    if(amount <= 0){
    printf("Invalid amount!\n");
    }
    else if(amount > balance){
    printf("Insufficient balance!\n");
    }
    else{
    balance = balance - amount;
    printf("Withdrawal successful!\n");
    printf("New balance: KSh %.2f\n", balance);
    }
	break;
	 case 4:
    printf("Goodbyeeee.\n");
	}
	}
	while( option != 4);
    
    return 0;
}
