#include <stdio.h>

// This shows Function prototypes
float add(float a, float b);
float subtract(float a, float b);
float multiply(float a, float b);
float divide(float a, float b);

// Addition function
float add(float a, float b) {
    return a + b;
}

// Subtraction function
float subtract(float a, float b) {
    return a - b;
}

// Multiplication function
float multiply(float a, float b) {
    return a * b;
}

// Division function with zero check
float divide(float a, float b) {
    if (b == 0) {
        return 0; // Will be handled in main() to display error message
    }
    return a / b;
}

int main() {
    float num1, num2;
    float result;
   
    // Ask input from user
    printf("Enter first number: ");
    scanf("%f", &num1);
   
    printf("Enter second number: ");
    scanf("%f", &num2);
   
    // Display header and inputs
    printf("\n========== CALCULATOR ==========\n");
    printf("First Number: %.2f\n", num1);
    printf("Second Number: %.2f\n", num2);
   
    // Perform and display all operations
    result = add(num1, num2);
    printf("Addition: %.2f\n", result);
   
    result = subtract(num1, num2);
    printf("Subtraction: %.2f\n", result);
   
    result = multiply(num1, num2);
    printf("Multiplication: %.2f\n", result);
   
    // Division with zero check
    if (num2 == 0) {
        printf("Division: Cannot divide by zero.\n");
    } else {
        result = divide(num1, num2);
        printf("Division: %.2f\n", result);
    }
   
    return 0;
}
