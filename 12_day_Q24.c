#include<stdio.h>

/*Q24: Write a program to calculate an electricity bill based on units consumed.
Sample Test Cases:
Input 1:
50
Output 1:
Bill: ₹250

Input 2:
150
Output 2:
Bill: ₹950

Input 3:
250
Output 3:
Bill: ₹2200
*/

int main(){
    int units;

    printf("Enter the number of units consumed:");
    scanf("%d" , &units);

    if (units <= 100)
    {
        printf("The total bill is rupees: %d" , units*5);
    }
    
    else if (units <= 200)
    {
        printf("The total bill is rupees: %d" , (100 * 5) + (units - 100) * 9);
    }

    else
    {
        printf("The total bill is rupees: %d" , (100 * 5) + (100 * 9) + (units - 200) * 16);
    }
    
    


    
    return 0;
}