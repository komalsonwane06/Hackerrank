#include <stdio.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n;
    scanf("%d",&n);
    int m=0;
    for(int i=1; m<n; ++i){
        int num=i*i;
        if(num%3!=0){
            printf("%d ",num);
            ++m;
        }
            
        
    }
    return 0;
}