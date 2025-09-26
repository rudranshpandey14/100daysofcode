//Write a program to swap two numbers using a third variable.
#include <stdio.h>

int main() {
    int a, b, t;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    t = a;
    a = b;
    b = t;

    printf("After swapping: a = %d, b = %d", a, b);

    return 0;
}
