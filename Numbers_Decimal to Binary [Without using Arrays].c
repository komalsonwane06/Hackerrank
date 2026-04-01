#include <stdio.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n;
    scanf("%d",&n);
    printf("Binary equivalent of %d: ",n);
    
    if (n==0) {
        printf("0");
        return 0;
    }
    
    int temp = n;
    int count=0;
    while (n>1) {
        n = n / 2;
        count++;
    }
    
    int m;
    for(int i=count; i>=0;--i){
        m=(temp >> i) & 1;
        printf("%d",m);
    }
    return 0;
}
