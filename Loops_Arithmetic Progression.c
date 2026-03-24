#include <stdio.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n,a,d;
    scanf("%d\n%d %d",&n,&a,&d);
    int b=a;
    for(int i=1; i<=n; ++i){
        printf("%d ",b);
        b=b+d;
    }
    return 0;
}