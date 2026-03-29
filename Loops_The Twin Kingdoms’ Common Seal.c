#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n,m;
    scanf("%d %d",&n,&m);
    int g;
    if(n>=m)
        g=n;
    else
        g=m;
        
    for(int i=g; i>=0; --i){
        if(n%i==0 && m%i==0){
            printf("%d",i);
            return 0;
        }
    }
    return 0;
}
