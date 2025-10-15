#include <stdio.h>
#include <math.h>


int main(void) {
    
     float x = 1.071212, y; //y = 2x^3−4x^2+3x−7, 1.071212
     printf("Type in x: ");
     scanf("%f", &x);
     y = 2*pow(x, 3) - 4*pow(x, 2) + 3*x - 7;
     printf("Function y is equal to: %lf\n", y);
    
   
    
    
    return 0;
}

