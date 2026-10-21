#include <stdio.h>

//required functions
float add(float a, float b);
float subtract(float a, float b);
float multiply(float a, float b);
float divide(float a, float b);

int main(){
    float num1, num2, add_r, sub_r, multiply_r, div_r; //variables
   
 // user input 1
	printf("Enter first num:");
	scanf("%f",&num1);
 // user input 2   
	printf("Enter second num:");
	scanf("%f",&num2);
	
//call functions
	add_r = add(num1,num2);
	sub_r= subtract(num1,num2);
	multiply_r= multiply(num1,num2);
	div_r= divide(num1,num2);
	
//display
	printf("\n========CALCULATOR========\n");
	printf("First number: %.2f\n",num1);
	printf("Second number: %.2f\n",num2);


//functions
	printf("\nAddition:    %.2f\n",add_r);
	printf("Subtraction:   %.2f\n",sub_r);
	printf("Multiplication:   %.2f\n",multiply_r);
	if (num2==0){
		printf("Division: CANNOT DIVIDE BY ZERO\n"); //call division
	} else{
		printf("Division:   %.2f\n", div_r); 
	}

	printf("\n========MATSALOVE========\n");
	
	return 0;
}

//definitions
float add(float a,float b){
	return a+b;
}
float subtract(float a,float b){
	return a-b;
}
float multiply(float a,float b){
	return a*b;
}
float divide(float a,float b){
	return a/b;
}
