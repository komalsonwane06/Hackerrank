#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
   char lowercase;
   scanf("%c", &lowercase);
   char uppercase = lowercase -32;
   printf("The uppercase of %c is %c",lowercase,uppercase);
}
