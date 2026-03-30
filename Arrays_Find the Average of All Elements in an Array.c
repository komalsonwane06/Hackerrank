#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int n;
    scanf("%d",&n);
    long long int a[n];
    for(int i=0; i<=n-1; ++i){
        scanf("%lld", &a[i]);
    }
    long long sum=0;
    for(int j=0; j<=n-1; ++j){
        sum +=a[j];
    }
    double average=(double)sum/n;
    printf("%0.6lf",average);
    return 0;
}
