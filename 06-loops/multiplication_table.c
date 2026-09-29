#include <stdio.h>

int main(){
	
	int count = 1;
	int number;
	
	printf("Enter number.\n");
	scanf("%d",&number);
	
	while(count <= 10){
		int Product = number * count;
		
		printf("%d * %d = %d.\n",number,count,Product);
		count = count + 1;
	}
	
	return 0;
}
