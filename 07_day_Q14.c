//Write a program to input a character and check whether it is a vowel or consonant using if–else.
#include <stdio.h>

int main() {
    char ch;

    // Input a character
    printf("Enter a character: ");
    scanf("%c", &ch);
    // Checking the character
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' )
     {
        printf("%c is a vowel.\n", ch);
    }
    else {
        printf("%c is a consonant.\n", ch);
    }

    return 0;
}
