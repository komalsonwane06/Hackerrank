#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int d,m,y;
    int leap;

    scanf("%d %d %d", &d, &m, &y);

    if (y%400 == 0)
        leap = 1;
    else if (y%100 == 0)
        leap = 0;
    else if (y%4 == 0)
        leap = 1;
    else
        leap = 0;

    if (m==2) {
        if ((leap && d < 29) || (leap==0 && d < 28))
            d++;
        else {
            d = 1;
            m++;
        }
    }
    else if (m==4 || m==6 || m==9 || m==11) {
        if (d<30)
            d++;
        else {
            d=1;
            m++;
        }
    }
    else {
        if(d<31)
            d++;
        else {
            d=1;
            if (m == 12) {
                m = 1;
                y++;
            } else
                m++;
        }
    }

    printf("%02d-%02d-%04d", d, m, y);
        
    return 0;
}
