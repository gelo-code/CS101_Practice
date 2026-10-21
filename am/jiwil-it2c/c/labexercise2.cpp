#include <stdio.h>

int CheckBarcode(char isbn[]); //declaration
void displayResult(int checkDigit); //declaration

int main(){
	
	char isbn[12];
	int checkNum;
	//Ask the user
	printf("Enter 11 digits barcode/ISBN: ");
	scanf("%s", isbn);
	
	checkNum = CheckBarcode(isbn);
	
	displayResult(checkNum);
	
	return 0;
	
}
//calculates the check digit using the 5 steps
int CheckBarcode(char isbn[]) {
	
	int oddSum = 0;
	int evenSum = 0;
	int step2 = 0;
	int step4 = 0;
	int checkDigit = 0;
	int i = 0;
	
	
	while (isbn[i] != '\0'){
		
		int digit = isbn[i] - '0'; //Convert char character to number
		int position = i + 1; //1st digit, 2nd digit, etc.
		
		if (position % 2 !=0){ //Step 1 add digits in odd positions
			oddSum += digit;
		} else {
			evenSum += digit; //Step 3 add digits in even positions
		}
		i++;
	}
	
	step2 = oddSum * 3; //Step 2 multiply odd sum by 3
	step4 = step2 + evenSum; //Step 4 add step 2 and step 3
	//step 5 find the number needed to reach the next multiple of 10
	if (step4 % 10 ==0) {
		checkDigit = 0;
	} else {
		checkDigit = 10 - (step4 % 10);
	}
	
	return checkDigit; //Return the answer back to main
}
void displayResult(int checkDigit){ //print final value
	printf("Check Digit: %d\n", checkDigit);
}
