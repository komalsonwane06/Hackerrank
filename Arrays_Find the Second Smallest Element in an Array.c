#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <limits.h>


int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0; i<n; ++i){
        scanf("%d", &a[i]);
    }
    int min=a[0];
    for(int i=1; i<n;++i){
        if(min>a[i])
            min=a[i];
    }
    
    int min2 = INT_MAX;
    for(int i=0; i<n; ++i){
        if(a[i]>min && a[i]<min2)
            min2=a[i];
    }
    if(min2 == INT_MAX)
        printf("-1");
    else
        printf("%d",min2);
    return 0;
}
