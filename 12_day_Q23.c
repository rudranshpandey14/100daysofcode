#include<stdio.h>

/*Q23: Write a program to calculate a library fine based on late days.
Sample Test Cases:
Input 1:
4
Output 1:
Fine ₹8

Input 2:
8
Output 2:
Fine ₹32

Input 3:
15
Output 3:
Fine ₹90

Input 4:
31
Output 4:
Membership Cancelled

*/

int main(){
    int latedays;

    printf("ENter the number of latedays:");
    scanf("%d" , &latedays);
    
    if (latedays >= 1  &&  latedays <= 5)
    {
        printf("The fine will be of rupees : %d " , latedays*2);
    }

    else if (latedays >= 6  &&  latedays <= 10)
    {
        printf("The fine will be of rupees : %d " , latedays*4);
    }

    else if (latedays >= 11  &&  latedays <= 30)
    {
        printf("The fine will be of rupees : %d " , latedays*6);
    }
    
    else
    {
        printf("Membership cancelled.");
    }
    
    
    
    return 0;
}