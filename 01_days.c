//Write a program to input two numbers and display their sum
#include <stdio.h>  // Header file for input/output functions

int main() {
    int num1, num2, sum;  // Variables to store two numbers and their sum

    // Asking user to input first number
    printf("Enter the first number: ");
    scanf("%d", &num1);   // Taking input and storing in num1

    // Asking user to input second number
    printf("Enter the second number: ");
    scanf("%d", &num2);   // Taking input and storing in num2

    // Calculating sum of two numbers
    sum = num1 + num2;

    // Displaying the result
    printf("The sum of %d and %d is %d\n", num1, num2, sum);

    return 0;  // Program ends successfully
}
