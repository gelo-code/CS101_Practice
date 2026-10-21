#include <stdio.h>

int checkisbn(int digits[]);                                  //decleration
int main() {
    int digits[9];                                            // Array to store the first 9 digits of the ISBN
    printf("Enter the first 9 digits of the ISBN:\n");
    for (int i = 0; i < 9; i++) {                             // Loop to input the 9 digits from the user
        scanf("%d", &digits[i]);                              // Store each input in the array
    }
    int checkdigit = checkisbn(digits);                       // Call checkisbn and store the returned check digit
    if (checkdigit == 10) {                                   
        printf("X\n");                                        // Print X if the check digit is 10, otherwise print the number
    } else {
        printf("%d\n", checkdigit);
    }
    return 0;                                                 // End the program successfully
}
int checkisbn(int digits[]) {                                 // Function to calculate the ISBN check digit
    int controlnumber = 0;
    for (int i = 0; i < 9; i++) {
        controlnumber += digits[i] * (10 - i);                // Multiply each digit by its weight (10 down to 2) and add the products
    }
    int checkdigit = (11 - (controlnumber % 11)) % 11;
    return checkdigit;                                        // Return the calculated check digit to main
}


