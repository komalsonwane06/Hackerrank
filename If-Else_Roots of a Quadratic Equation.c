#include <stdio.h>
#include <math.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int a,b,c;
    double r1, r2;
    scanf("%d %d %d",&a,&b,&c);
    double d= pow(b,2) - 4.0 *a *c;
    
    if(d>0){ 
        r1= (-b -sqrt(d)) / (2.0*a);
        r2= (-b +sqrt(d)) / (2.0*a);
        printf("Roots: %.2f, %.2f\n",r2,r1);
        printf("Type: Real and Distinct");
    }
    else if(d==0){
        r1= (-b / 2.0*a) +0.00f;
        printf("Roots: %.2f, %.2f\n",r1,r1);
        printf("Type: Real and Equal");
    }
    else{
        double real=(-b)/(2.0*a);
        double imag= sqrt(-d)/(2*a);
        
        printf("Roots: %.2f + %.2fi, %.2f - %.2fi\n",real,imag,real,imag);
        printf("Type: Complex");
    }
    
    return 0;
}