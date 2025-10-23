#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <stdlib.h>

int main(void) {
    
    unsigned long long a, temp, fNum = 0, lNum = 0;
    int lenght = 0;
    printf("Give me an unsigned long long: ");
    
    if (scanf("%llu", &a) != 1) {
        printf("Incorrect input\n");
        return 1;
    }
    temp = a;
    while (temp > 0) {
        temp /= 10;
        lenght++;
    }
    lNum = a % 10;
    fNum = a;
    for (int i = 0; i < lenght - 1; i++) {
        fNum /= 10;
    }
    printf("1st number: %llu\n", fNum);
    printf("1st number: %llu\n", lNum);
    
    return 0;
}
