#include <stdio.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int n;
    scanf("%d",&n);
    if(n<1)
        return 0;
    int m=1;
    printf("<");
    for(int i=1; i<=n;){
        printf("%d",m);
        m=m*2;
        ++i;
        if(i<=n)
            printf(" ");
    }
    printf(">");
    
    return 0;
}