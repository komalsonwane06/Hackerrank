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
    long long sum=a[0];
    for(int i=1; i<n; ++i)
        sum +=a[i];
    double average= (double)sum/n;
    
    int count=0;
    for(int i=0; i<n; ++i){
        if(average<a[i])
            ++count;
    }
    printf("%d",count);
    return 0;
}
