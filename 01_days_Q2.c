//Write a program to input two numbers and display their sum, difference, product, and quotient.
#include <stdio.h>

int main() {
    int a, b;        // variables to store input numbers
    int sum, difference, product;
    float quotient;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);   // input two numbers

    sum = a + b;   // addition
    difference = a - b; // subtraction
    product = a * b; // multiplication
    quotient = (float) a / b; // division (converted to float for decimal result)

    printf("Sum = %d\n", sum);
    printf("Difference = %d\n", difference);
    printf("Product = %d\n", product);
    printf("Quotient = %f\n", quotient);

    return 0;
}
