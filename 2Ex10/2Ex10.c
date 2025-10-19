#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <stdlib.h>

int main(void) {
    
    float a, b;
    printf("Type the first number: ");
    if (scanf("%f", &a) != 1) {
        printf("Incorrect input\n");
        return 1;
    }
    printf("Type the second number: ");
    if (scanf("%f", &b) != 1) {
        printf("Incorrect input\n");
        return 1;
    }
    printf("Sum = %f\nDifference = %f\nProduct = %f\n", a+b, a-b, a*b);
    if (b == 0) {
        printf("Operation not permitted\n");
    } else {
        printf("Quotent = %f\n", a/b);
    }
    
    return 0;
}
