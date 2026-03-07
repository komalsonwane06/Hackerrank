#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

  int area(int a, int b){
      return a*b;
  }

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int a,b;
    scanf("%d",&a);
    scanf("%d",&b);
    printf("The area is: %d units", area(a,b));
    
    return 0;
}
