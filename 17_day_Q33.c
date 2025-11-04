#include<stdio.h>

/*Q33: Write a program to check if a number is an Armstrong number.
Sample Test Cases:
Input 1:
153
Output 1:
Armstrong

Input 2:
123
Output 2:
Not Armstrong
*/

int main(){
    int n,rem,sum=0,temp;

    printf("Enter the number that you want to check:");
    scanf("%d" ,&n);

    temp=n;

    while (n>0)
    {
        rem=n%10;
        sum = sum + (rem*rem*rem);
        n=n/10;
    }

    if (temp==sum)
    {
        printf("%d is an Armstrong number." , temp);
    }

    else
    {
        printf("%d is not an Armstrong number." , temp);
    }
    
    
    
    return 0;
}