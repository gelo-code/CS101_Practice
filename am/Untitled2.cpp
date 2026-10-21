#include <stdio.h>

 float add(float a, float b)
	{return a+b;} 

float subtract(float a, float b)
	{return a-b;}

float multiply(float a, float b)
	{return a*b;} 

float divide(float a, float b)
	{return a/b;}


int main()
{float num1, num2;

	printf("\nPlease input a number: ");
	scanf("%f", &num1);
	printf("\nPlease input a second number: ");
	scanf("%f", &num2);
	
	printf("first number: %.2f\n", num1);
	printf("second number: %.2f\n", num2);
	
	printf("Addition: %f\n", add(num1, num2));
	printf("Subtraction: %f\n", subtract(num1, num2));
	printf("Multiplication: %f\n", multiply(num1, num2));
	

	
	if(num2 ==0)
{printf("Division:Cannot be divided by zero\n");
}
	else
{printf("Division:%f\n", divide(num1, num2));
}


}

