#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n,m;
    scanf("%d %d",&n,&m);
    for(int i=1;;++i){
        if(i%n==0 && i%m==0){
            printf("%d",i);
            return 0;
        }
    }
    return 0;
}
