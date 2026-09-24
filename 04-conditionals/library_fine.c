# include <stdio.h>

int main(){
	
	int Book_ID,Due_Date,Return_Date,daysOverdue,fineRate,fineAmount;
	
	printf("Enter the following details.\n");
	
	printf("Enter Book_ID.\t");
	scanf("%d",&Book_ID);
	
	printf("Enter Due_Date.\t");
	scanf("%d",&Due_Date);
	
	printf("Enter Return_Date.\t");
	scanf("%d",&Return_Date);
	
	daysOverdue = Return_Date - Due_Date;
	
	if(daysOverdue >= 15){
		fineRate = 100;
		fineAmount = daysOverdue * fineRate;
	}
	else if(daysOverdue >=8){
		fineRate = 50;
		fineAmount = daysOverdue * fineRate;
	}
	else{
		fineRate = 20;
		fineAmount = daysOverdue * fineRate;
	}
	
	printf("The user details.....\n");
	printf("Book_ID = %d.\n",Book_ID);
    printf("dueDate = %d.\n",Due_Date);
   	printf("returnDate = %d.\n",Return_Date);
    printf("Days Overdue = %d.\n",daysOverdue);
    printf("FineAmount = %d.\n",fineAmount);

	return 0;
}
