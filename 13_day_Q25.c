#include<stdio.h>
/*Q25: Write a program to implement a basic calculator using switch-case for +, -, *, /, %.
Sample Test Cases:
Input 1:
4 2 +
Output 1:
6

Input 2:
10 3 %
Output 2:
1

Input 3:
15 5 /
Output 3:
3
*/

int main(){
    int input1, input2;
    char operator;

    printf("enter the first number:");
    scanf("%d" , &input1);

    printf("enter the second number:");
    scanf("%d" , &input2);
    
    printf("enter the operator:");
    scanf(" %c" , &operator);

    switch (operator)
    {
    case '+':
        printf("%d" , input1+input2);
        break;

    case '-':
        printf("%d" , input1-input2);
        break;

    case '*':
        printf("%d" , input1*input2);
        break;

    case '/':
        printf("%d" , input1/input2);
        break;

    case '%':
        printf("%d" , input1%input2);
        break;

    default:
        printf("Invalid operator.");
        break;
    }
    return 0;
}