#include <stdio.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   

    int h, t;
    int a,b,c;
    float f;
    scanf("%d %f %d",&h, &f, &t);
    
    if(h>50)
         a=1;
    else
        a=0;

    if(f<0.7)
        b=1;
    else
        b=0;

    if(t>5600)
        c=1;
    else
        c=0;

    if(a==1 && b==1 && c==1)
        printf("The grade of the steel is: 10\nAll of the conditions met.");

    else if(a==1 && b==1)
        printf("The grade of the steel is: 9\nTwo conditions met.");

    else if(b==1 && c==1)
        printf("The grade of the steel is: 8\nTwo conditions met.");
        
    else if(a==1 && c==1)
        printf("The grade of the steel is: 7\nTwo conditions met.");

    else if((a + b + c) == 1)
        printf("The grade of the steel is: 6\nOnly one condition met.");

    else
        printf("The grade of the steel is: 5\nNone of the conditions met.");
    return 0;
}