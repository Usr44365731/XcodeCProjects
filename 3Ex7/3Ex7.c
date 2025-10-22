#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <stdlib.h>

int main(void) {
    
    double a = 10;
    for (double i = 1; i < 20; i++) {
        printf("%.0f ", pow(a, i));
    }
}
