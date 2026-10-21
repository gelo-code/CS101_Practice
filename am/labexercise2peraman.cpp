#include<stdio.h>
#include<string.h>
#include<ctype.h>

int CheckBarcode(char barcode[]) {

//function to calculate the check digit 
	int length = strlen(barcode); //built-in library function used to calculate and return the length of a string. It counts the total number of characters in the string
	int sum = 0;
	int checkDigit;
	
	//process from right to left, starting with 1. 
	
	for (int i = length - 1; i>=0; i--)
	{
	
	
		int digit = barcode[i] - '0';
		int position = length - i;
		
		if (position %2 == 1) {
			
			sum += digit*3;
		} else {
			sum += digit*1;
		}
 } 
 
 //calculate check digit
 
 int remainder = sum % 10;
 if (remainder == 0) {
 	checkDigit = 0;
 } else {
 	checkDigit = 10 - remainder;
 }
 
 return checkDigit;
}
//display the result
void displayResult(int checkDigit) {

	printf("%d\n", checkDigit);
}

int main() {
	char barcode[50];
	int checkDigit;
	
	printf("Enter the barcode digits (without check digit): ");
	scanf("%s", barcode);
	
	//Validate the input to check if all characters are all digits
	
	for (int i = 0; i < strlen(barcode); i++) {
		if  (!isdigit(barcode[i])) {
			printf("\nError: Invalid Input! Please enter only digits.\n");
		return 1;
		}
	}
	
	
	//calculate the checkdigit 
	checkDigit = CheckBarcode(barcode);
	
	//display only the check digit
	displayResult(checkDigit);
	
	return 0; 
}
 
 
	
	

	
