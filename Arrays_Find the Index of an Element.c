#include <stdio.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int n,m;
    scanf("%d",&n);
    int a[n];
    for(int i=0; i<n; ++i){
        scanf("%d ",&a[i]);
    }
    scanf("%d",&m);
    int i;
    for(i=0; i<n; ++i){
        
        if(a[i]==m){
            printf("%d",i);
            break;
        }
    }
    if(i==n)
        printf("-1");

    return 0;
}