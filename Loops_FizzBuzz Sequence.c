#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n;
    scanf("%d",&n);
    
    for(int i=1; i<=n; i++){
        if(i%15==0)
            printf("FizzBuzz");
        else if(i%3==0)
            printf("Fizz");
        else if(i%5==0)
            printf("Buzz");
        else
            printf("%d",i);
        if(i==n)
            return 0;
        printf("\n");
    }
    return 0;
}
