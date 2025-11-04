#include<stdio.h>
/*Q30: Write a program to reverse a given number.
Sample Test Cases:
Input 1:
1234
Output 1:
4321

Input 2:
100
Output 2:
1


ratna h.
*/

int main(){
    int n , reverse=0 , r;
    
    printf("Enter the number: ");
    scanf("%d" , &n);

    while (n>0)
    {
        r=n%10;
        reverse = reverse*10+r;
        n=n/10;
    }

    printf("The reverse of the number is: %d" , reverse);
    
    
    return 0;
}