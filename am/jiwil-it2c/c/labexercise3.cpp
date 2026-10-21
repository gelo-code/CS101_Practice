#include <stdio.h>

int CheckISBN(){
	int sum = 0, i, digit;
	
	for(i=1; i<=9; i++){
		scanf("%d", &digit);
		sum = sum + digit * i;
	}
	return sum % 11;
}

void displayDigit(int digit){
	if(digit==10)
		printf("Check digit: x");
	else
		printf("Check digit: %d", digit);
}
int main(){
	int digit;
	
		printf("ISBN: ");
		digit = CheckISBN();
		displayDigit(digit);
	
	return 0;
}
