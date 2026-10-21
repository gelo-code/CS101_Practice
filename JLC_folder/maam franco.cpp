// LAB EXERCISE 1
#include <stdio.h>

float add (float a, float b)
{
	return a+b;
}
float subtract (float a, float b)
{
	return a-b;
}
float multiply (float a, float b)
{
	return a*b;
}
float divide (float a, float b)
{
	return a/b;
}
int main(){
	float num1, num2;
	float sum, diff, prod,quot;
	printf("Enter first number: ");
	scanf("%f",&num1);
	
	printf("Enter Second number: ");
	scanf("%f",&num2);
	sum= add(num1, num2);
	diff= subtract(num1, num2);
	prod= multiply (num1, num2);
	printf("=====CALCULATOR=====");
	printf("\nFirst number: \n%.2f\n", num1);
	printf("Second number: \n%.2f\n", num2);
	printf("Addition: \n%.2f\n", sum);
	printf("Subtraction: \n%.2f\n", diff);
	printf("Multiplication: \n%.2f\n", prod);
	
	if (num2 == 0) {
	printf("Division: \nCannot divide by Zero.\n");	
	} else {
		quot = divide(num1, num2);
		printf("Division: \n%.2f\n",quot);
	}
	return 0;
}
