#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    long long int n;
    scanf("%lld",&n);
    long long int a[n];
    for(int i=0; i<n; ++i){
        scanf("%lld", &a[i]);
    }
    long long int even=0;
    long long int odd=0;
    for(int j=0; j<n; ++j){
        if(j%2==0)
            even +=a[j];
        else
            odd +=a[j];
    }
    printf("%lld",even-odd);
    return 0;
}
