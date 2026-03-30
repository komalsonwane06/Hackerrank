#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0; i<n; ++i)
        scanf("%d", &a[i]);

    for(int i=0; i<n; ++i){
        if(a[i]<0)
            printf("0 ");
        else
            printf("%d ",a[i]);
    }
    
            
    return 0;
}
