#include <stdio.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n;
    int a = 0, b = 0, c = 0;
    scanf("%d",&n);
    
    if(n<=0){
        printf("The verdict for the number %d is: INVALID", n);
        return 0;
    }
    if(n>10 && n%2==0)
        a=1;
    else
        a=0;
    if(n>15 && n%3==0)
        b=1;
    else
        b=0;
    if(n%7==0)
        c=1;
    else
        c=0;
    
    if((a+b+c)==3)
        printf("The verdict for the number %d is: SUPERNATURAL", n);
    else if((a+b+c)==2)
        printf("The verdict for the number %d is: MIRACULOUS", n);
    else if ((a+b+c)==1)
        printf("The verdict for the number %d is: MAGICAL", n);
    else
        printf("The verdict for the number %d is: NORMAL", n);
    return 0;
}