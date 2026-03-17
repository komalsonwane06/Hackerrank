#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int n;
    scanf("%d",&n);
    if(n<=0){
        printf("Invalid amount");
        return 0;
    }
    int x=n/500;
    int y=(n%500)/200;
    int z=((n%500)%200)/100;
    printf("500-rupee notes: %d\n200-rupee notes: %d\n100-rupee notes: %d",x,y,z);
    return 0;
}