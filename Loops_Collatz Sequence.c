#include <stdio.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int n;
    scanf("%d",&n);
    for(;n>=2;){
        printf("%d -> ",n);
        if(n%2)
            n=3*n+1;
        else
            n=n/2;
        
    
    }
    printf("1");
    return 0;
}
