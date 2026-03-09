#include <stdio.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int Y;
    scanf("%d", &Y);

    // Invalid year check
    if (Y <= 0) {
        printf("The given year %d is Invalid year.", Y);
        return 0;
    }

    // Leap year logic
    if ((Y % 400 == 0) || (Y % 4 == 0 && Y % 100 != 0)) {
        printf("Yes, %d is a leap year.", Y);
    } else {
        printf("No, %d is not a leap year.", Y);
    }
    return 0;
}