#include <stdio.h>

float add(float a, float b);
float subtract(float a, float b);
float multiply(float a, float b);
float divide(float a, float b);

int main() {
	float num1, num2;
	
	printf("enter 1st number:");
	scanf("%f", &num1);
	
	printf("enter 2nd number:");
	scanf("%f", &num2);
	
	printf("\n========== CALCULATOR ==========\n");
	printf("First number: %.2f\n", num1);
	printf("second number: %.2f\n", num2);
	
	printf("addition: %.2f\n", add(num1, num2));
	printf("Subtraction: %.2f\n", subtract(num1, num2));
	printf("Multiplication: %.2f\n", multiply(num1, num2));
	
	if (num2 != 0){
		printf("Division: %.2f\n", divide(num1, num2));
	} else {
		printf("Division: Cannot be divided by zero.\n");
	}
	
	return 0;
}

float add(float a, float b){
	return a + b;
}

float subtract(float a, float b){
	return a - b;
}

float multiply(float a, float b){
	return a * b;
}

float divide(float a, float b){
	return a / b;
}
