#include <stdio.h>

int main() {
    // Declare variables for radius, area, and circumference
    float radius, area, circumference;

    // Input from the user
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    // Calculate area (3.14 × r × r) 
    area = 3.14 * radius * radius;

    // Calculate circumference (2 × 3.14 × r)
    circumference = 2 * 3.14 * radius;


    printf("Area of the circle = %f\n", area);
    printf("Circumference of the circle = %f\n", circumference);

    return 0; 
}
