#include <stdio.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n;
    scanf("%d",&n);
    if(n>=3){
        for(int i=1; i<=n; ++i){
            for(int j=1; j<=n; ++j){
                if(j==1 || i==1 || i==n || j==n)
                    printf("*");
                else
                    printf("#");
            }
            printf("\n");
        }
    }
    else
        printf("Shape Not Possible");
    return 0;
}