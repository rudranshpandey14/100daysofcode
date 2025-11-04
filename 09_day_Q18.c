#include<stdio.h>
#include<math.h>


/*Q17: Write a program to find the roots of a quadratic equation and categorize them.
Sample Test Cases:
Input 1:
1 -3 2
Output 1:
Roots are real and different: 2, 1

Input 2:
1 -2 1
Output 2:
Roots are real and same: 1

Input 3:
1 2 5
Output 3:
Roots are complex

*/
int main(){
    int a,b,c,discriminant, root1, root2;

    printf("Enter the value of a:");
    scanf("%d" , &a);    

    printf("Enter the value of b:");
    scanf("%d" , &b);

    printf("Enter the value of c:");
    scanf("%d" , &c);

     discriminant = b*b - 4*a*c;
     root1 = (-b + sqrt(discriminant)) / 2*a;
     root2 = (-b - sqrt(discriminant)) / 2*a;

     if (discriminant>0)
     {
        printf("Roots are real and different: %d, %d \n" , root1, root2);
     }

     else if (discriminant==0)
     {
        printf("Roots are real and same: %d \n" , root1);
     }

     else
     {
        printf("Roots are imaginary. \n");
     }
     
     
     
    return 0;
}