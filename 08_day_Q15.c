#include <stdio.h>

int main() {
    char ch;

    // Input a character
    printf("Enter a character: ");
    scanf("%c", &ch);

    // Checking the type of alphabet
    if (ch >= 'A' && ch <= 'Z') {
        printf("It is a Uppercase Alphabet.\n");
    }
    else if (ch >= 'a' && ch <= 'z') {
        printf("It is a Lowercase Alphabet.\n");
    }
    else if (ch >= '0' && ch <= '9') {
        printf("It is a Digit.\n");
    }
    else {
        printf("It is a Special Character.\n");
    }

    return 0;
}
