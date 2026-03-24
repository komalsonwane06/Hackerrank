#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int n;
    scanf("%d",&n);
    int m=n;
    for(int i=1; i<=n; ++i){
        m=n-i+1;
        for(int j=1; j<=n-i+1; ++j){
            printf("%d ",m--);
        }   
        printf("\n");
    }
    return 0;
}
