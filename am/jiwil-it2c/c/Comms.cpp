#include <stdio.h>
// standard input/output library needed for printf and scanf

int CheckISBN(){
// Defines the function that computes the check digit

	int sum = 0, i, digit;
	// Declares 3 variables
	// sum - holds control number
	// i - the loop counter
	// digit - holds each digit as it is typed
	
	for(i=1; i<=9; i++){
	// Repeats the block 9 times
	// 1st digit x2, 2nd digit x2...
	
		scanf("%d", &digit);
		// Reads one integer input by user and passes on 'digit'
		sum = sum + digit * i;
		// This is where the calculation happens, 
	}
	return sum % 11;
	// % is the remainder operator
	// check digit is the remainder of control number divided by 11
	// return sends back to main
}

void displayDigit(int digit){
	//Defines the function that prints the result
	//Void means it returns nothing
	
	if(digit==10)
		printf("Check digit: x");
	else
		printf("Check digit: %d", digit);
		// Remainder divided by 11 can be 0-10, but, 10 has 2 digits and would not fit in single check digit position
		//So, 10 is printed as x
}
int main(){
	int digit;
	// This is the Program Entry Point
	// digit stores  value returned by CheckISBN
	
		printf("ISBN: ");
		//Prints ISBN numbers on the screen
		digit = CheckISBN(); 
		// Calls CheckISBN which reads 9 digits and calculates
		// returned remainder is stored in digit
		displayDigit(digit);
		// Passes the check digit to displayDigit
	
	return 0;
	// Ends the program
}
