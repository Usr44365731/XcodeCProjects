#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <stdlib.h>

int main(void) {
    
    int a, b;
    printf("Type the first number: ");
    if (scanf("%d", &a) != 1) {
        printf("Incorrect input\n");
        return 1;
    }
    printf("Type the second number: ");
    if (scanf("%d", &b) != 1) {
        printf("Incorrect input\n");
        return 1;
    }
    printf("Sum = %d\nDifference = %d\nProduct = %d\n", a+b, a-b, a*b);
    if (b == 0) {
        printf("Operation not permitted\n");
    } else {
        printf("Quotent = %d\n", a/b);
    }
    
    return 0;
}
