//Write a program to calculate the area and perimeter of a rectangle given its length and breadth.
#include <stdio.h>

int main() {
    // Declare variables for length, breadth, area, and perimeter
    float length, breadth, area, perimeter;

    // Input length and breadth from the user
    printf("Enter the length of the rectangle: ");
    scanf("%f", &length);

    printf("Enter the breadth of the rectangle: ");
    scanf("%f", &breadth);

    // Calculate area = (length × breadth)
    area = length * breadth;

    // Calculate perimeter = (2 × (length + breadth))
    perimeter = 2 * (length + breadth);

    
    printf("Area of the rectangle = %f\n", area);
    printf("Perimeter of the rectangle = %f\n", perimeter);

    return 0; 
}
