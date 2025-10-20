#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <stdlib.h>

int main(void) {
    
    unsigned long long a;
    printf("Give me an unsigned long long: ");
    
    if (scanf("%llu", &a) != 1 || a < 0) {
        printf("Incorrect input\n");
        return 1;
    }
    
}
