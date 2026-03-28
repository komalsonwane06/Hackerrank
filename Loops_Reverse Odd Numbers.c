#include <stdio.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n;
    scanf("%d",&n);
    int a[n];
    int m=1;
    for(int i=0;i<n;++i){
        a[i]=m;
        m +=2;  
    }
    for(int i=n-1;i>=0;--i){
        printf("%d",a[i]);
        if(i!=0)
            printf(" ");
        else
            printf(".");
    }
    return 0;
}