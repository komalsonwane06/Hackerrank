#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
    void split(int n){
    int A = n/100 ;
        int B = (n/10) % 10;
        int C = n % 10;
        
        printf("%d %d %d", A, B , C);
    }

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n;
    scanf("%d", &n);

    split(n);
    
    return 0;
}
