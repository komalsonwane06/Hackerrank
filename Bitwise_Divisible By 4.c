#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <limits.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    long long n;
    scanf("%lld", &n);

    if (n < INT_MIN || n > INT_MAX) {
        printf("Out of Range");
    }
    else if(n&3)
        printf("Not Divisible");
    else
        printf("Divisible");
    return 0;
}
