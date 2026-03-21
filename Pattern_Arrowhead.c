#include <stdio.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int n;
    scanf("%d",&n);
    if(n<2){
        printf("Shape Not Possible");
        return 0;
    }
    int m=n*2-1;
    for(int i=1; i<=m; ++i){
        for(int j=1; j<=m; ++j){
            if(j==1 || (i==j && j<=n) || (i+j==m+1 && j<=n))
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}     