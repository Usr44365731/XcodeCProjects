#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <stdlib.h>

int main(void) {

    int a, b;
    printf("Give me 1st number: ");
    if (scanf("%d", &a) != 1) {
        printf("Incorrect input\n");
        return 1;
    }
    printf("Give me 2nd number: ");
    if (scanf("%d", &b) != 1) {
        printf("Incorrect input\n");
        return 1;
    } else if (b == 0) {
        printf("Operation not permitted\n");
        return 1;
    }
    
    if (a % b == 0) {
        printf("%d is divisible by %d\n", a, b);
    } else {
        printf("%d is not divisible by %d\n", a, b);
    }
    
    
    return 0;
}

