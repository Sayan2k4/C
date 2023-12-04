#include <stdio.h>

// Function to reverse the digits of an integer
int reverseInteger(int n) {
    int reversed = 0;

    // Loop to reverse the digits
    while (n != 0) {
        int digit = n % 10;      // Extract the last digit
        reversed = reversed * 10 + digit;   // Append the digit to the reversed number
        n /= 10;                 // Remove the last digit from n
    }

    return reversed;
}

int main() {
    int number;

    // Get input from the user
    printf("Enter an integer: ");
    scanf("%d", &number);

    // Call the reverseInteger function and display the result
    int reversedNumber = reverseInteger(number);
    printf("Reversed integer: %d\n", reversedNumber);

    return 0;
}
