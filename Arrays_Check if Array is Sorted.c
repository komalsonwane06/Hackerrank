#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0; i<n; ++i){
        scanf("%d", &a[i]);
    }
    
    int flag=0;
    for(int j=1; j<n; ++j){
        if(a[j-1]>a[j])
            flag=1;
    }
    if(flag)
        printf("Not Sorted");
    else
        printf("Sorted");
    return 0;
}
