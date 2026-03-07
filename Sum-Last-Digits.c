#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


    
    int sumLastDigits(int a, int b) {
    int lastA = a % 10;
    int lastB = b % 10;
    return lastA + lastB;
}

int main() {
    int a, b;
    if (scanf("%d %d", &a, &b) != 2) {
        return 0; // invalid input
    }

    int res = sumLastDigits(a, b);
    printf("The sum of last digits is: %d\n", res);

    return 0;
}
