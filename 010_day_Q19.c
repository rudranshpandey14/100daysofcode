#include<stdio.h>


/*Q19: Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.
Sample Test Cases:
Input 1:
3 3 3
Output 1:
Equilateral

Input 2:
3 3 4
Output 2:
Isosceles

Input 3:
2 3 4
Output 3:
Scalene

*/
int main(){
    int side1, side2,side3;

    printf("Enter the dimension of the first side in cm:");
    scanf("%d" , &side1);

     printf("Enter the dimension of the second side in cm:");
    scanf("%d" , &side2);

     printf("Enter the dimension of the third side in cm:");
    scanf("%d" , &side3);
    
    if (side1 == side2 && side2 == side3)
    {
        printf("Equilateral.");
    }

    else if (side1 == side2 || side2 == side3 || side1 == side3)
    {
        printf("Isosceles.");
    }

    else
    {
        printf("Scalene.");
    }
    
    
    
    return 0;
}