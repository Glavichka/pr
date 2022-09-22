#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(){
 int x;
 double res_f, res_g;
 res_f = 0;
 res_g = 0;
 printf("Enter x:");
 scanf("%d", &x);
 res_f = (exp(-(abs(x))))*sin(x);
 res_g = (exp(-(abs(x))))*cos(x);
 printf("Result f(x): %lf \n", res_f);
 printf("Result g(x): %lf \n", res_g);
}
