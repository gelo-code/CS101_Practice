#include <stdio.h>

	float balance;
	float amount;
	
	
int main(){
	
	float balance;
	float amount;
	
	 
	printf("Enter Bank Balance:");
	scanf("%f",&balance);
	
	printf("Enter Withdrawal Amount:");
	scanf("%f",&amount);
	

	
	printf("\n========BANK WITHDRAWAL========\n");
	printf("Enter Bank Balance: %.2f\n",balance);
	printf("Enter Withdrawal Amount: %.2f\n",amount);
	
	if (balance<=amount){
		printf("Insufficient Funds\n"); //call division
	} else {
		printf("New Balance:   %.2f\n",balance-amount); 
	}
	
	return 0;
	
}

