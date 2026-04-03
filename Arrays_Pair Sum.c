#include <stdio.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    long long int n,k;
    scanf("%lld\n",&n);
    long long int a[n];
    for(int i=0; i<n; ++i)
        scanf("%lld", &a[i]);
    scanf("%lld\n",&k);
    
    if(n<2){
        printf("-1");
        return 0;
    }
    
    long long int i;
    long long int j;
    int flag=0;
    for(i=0; i<n; ++i){
        for(j=i+1; j<n; ++j){
            if(a[i]+a[j]==k){
                flag=1;
                break;
            }    
        }
        if(flag)
            break;
    }
    if(flag)
        printf("%lld %lld",a[i],a[j]);
    else
        printf("-1");
    return 0;
}