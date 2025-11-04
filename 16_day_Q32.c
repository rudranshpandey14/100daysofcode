#include<stdio.h>

/*Q32: Write a program to check if a number is a palindrome.
Sample Test Cases:
Input 1:
121
Output 1:
Palindrome

Input 2:
123
Output 2:
Not palindrome
*/

int main(){
    int number , temporary , r , s=0 ;

    printf("Enter input:");
    scanf("%d" , &number);

    temporary = number;

    while (number>0)
    {
        r=number%10;
        s=s*10+r;
        number=number/10;
    }


    if (s==temporary)
    {
        printf("Palinderome.");
    }

    else {
        printf("Not a palinderome.");
    }
      return 0;
}