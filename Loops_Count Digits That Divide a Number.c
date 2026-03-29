#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n;
    scanf("%d",&n);
    int g=n;
    int count =0;
    while (n>0) {
        int d = n%10;
        if(g%d==0){
            count +=1;
        }
        n = n / 10;
    }
    printf("%d",count);
    return 0;
}
