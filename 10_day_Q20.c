#include<stdio.h>


/*Q20: Write a program to display the day of the week based on a number (1–7) using switch-case.
Sample Test Cases:
Input 1:
1
Output 1:
Monday

Input 2:
5
Output 2:
Friday

*/

int main(){
    int number;

    printf("Enter the number in correspondance of day:");
    scanf("%d" , &number);

    if (number==1)
    {
        printf("MOnday.");
    }

    else if (number==2)
    {
        printf("Tuesday.");
    }
    
    else if (number==3)
    {
        printf("WEdnesday.");
    }

    else if (number==4)
    {
        printf("Thursday.");
    }

    else if (number==5)
    {
        printf("Friday.");
    }
    
    else if (number==6)
    {
        printf("Saturday.");
    }
    
    else if (number==7)
    {
        printf("Sunday.");
    }

    else
    {
        printf("Enter a number between 1 to 7 only.");}
    
    
    
    
    
    
    
    return 0;
}