#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int num1, num2, num3;
    scanf("%d",&num1);
    scanf("%d",&num2);
    scanf("%d",&num3);
    int res1=num1* 3600;
    int res2=num2* 60;
    int total=res1+res2+num3;
    printf("Total seconds: %d " ,total);
        
    return 0;
}
