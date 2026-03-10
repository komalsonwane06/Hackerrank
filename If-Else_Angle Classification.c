#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int a;
    scanf("%d",&a);
    
    if (a == 0) {
        printf("Acute Angle");
        return 0;
    }
    
    int n = a % 360;
    
    if (n == 0)
        printf("Full Rotation");
    else if (n < 90)
        printf("Acute Angle");
    else if (n == 90)
        printf("Right Angle");
    else if (n < 180)
        printf("Obtuse Angle");
    else if (n == 180) 
        printf("Straight Angle");
    else
        printf("Reflex Angle");
    return 0;
}
