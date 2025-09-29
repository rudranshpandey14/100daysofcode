#include <stdio.h>

int main() {
    int totalSeconds;
    int hours, minutes, seconds;

    // Input total time in seconds
    printf("Enter time in seconds: ");
    scanf("%d", &totalSeconds);

    //  Converting to hours, minutes, and seconds
    hours = totalSeconds / 3600;           
    minutes = (totalSeconds % 3600) / 60;  
        seconds = totalSeconds % 60;           

    // output
    printf("Time is %d:%d:%d\n", hours, minutes, seconds);

    return 0;
}
