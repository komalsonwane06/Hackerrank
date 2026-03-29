#include <stdio.h>
#include <string.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int m,y;
    scanf("%d\n%d",&m,&y);
    if(m<1 || m>12)
        printf("Invalid Month\n");
    if(y<1){
        printf("Invalid Year\n");
        return 0;
    }
    if(m==1 || m==3 || m==5 || m==7 || m==8 || m==10 || m==12){
        printf("31");
    }
    else if(m==4 || m==6 || m==9 || m==11){
        printf("30");
    }
    else if(m==2){
        if((y%400 == 0) || (y%4 == 0 && y%100 != 0))
            printf("29");
        else
            printf("28");
    }
    
         
    return 0;
}