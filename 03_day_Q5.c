//Write a program to convert temperature from Celsius to Fahrenheit.
#include <stdio.h>

int main() {
    // Declare variables for Celsius and Fahrenheit
    float celsius, fahrenheit;

    // Taking input 
    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);

    // Convert Celsius to Fahrenheit using formula: F = (C × 9/5) + 32
    fahrenheit = (celsius * 9.0 / 5.0) + 32;

    
    printf("Temperature in Fahrenheit = %f\n", fahrenheit);

    return 0;
}
