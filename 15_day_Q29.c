#include<stdio.h>
/*Q29: Write a program to calculate the factorial of a number.
Sample Test Cases:
Input 1:
5
Output 1:
120

Input 2:
3
Output 2:
6
*/

int main(){
    int n;
    int factorial = 1;

    printf("Enter the value of n:");
    scanf("%d" , &n);

    for (int i = 1; i <=n; i++)
    {
        factorial = factorial*i;
    }

    printf("The factorial is : %d \n " , factorial );
    


    
    return 0;
}