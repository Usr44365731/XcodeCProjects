#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <stdlib.h>

int main(void) {
    
    int a;
    float price = 0;
    
    printf("Give me amount of kWh: ");// 221, 274
    if (scanf("%d", &a) != 1 || a < 0) {
        printf("Incorrect input\n");
        return 1;
    }
    
    if (a > 0 && a < 50) {
        price += a * 0.5;
    } else if (a < 151) {
        price += 50 * 0.5;
        price += (a - 50) * 0.75;
    } else if (a < 251) {
        price += 50 * 0.5;
        price += 100 * 0.75;
        price += (a - 150) * 1.2;
    } else {
        price += 50 * 0.5;
        price += 100 * 0.75;
        price += 100 * 1.2;
        price += (a - 250) * 1.5;
    }
    float brutto = price * 1.22;
    printf("%f\n", brutto);
    
    return 0;
}

/*if (a > 0 && a < 51) {
 price += a * 0.5;
 }
 if (a > 50) {
 price += 50 * 0.5;
 }
 if (a > 50 && a < 151) {
 price += (a - 50) * 0.75;
 }
 if (a > 50 && a > 150) {
 price += 100 * 0.75;
 }
 if (a > 150 && a < 251) {
 price += (a - 150) * 1.2;
 }
 if (a > 150 && a > 250) {
 price += 100 * 1.2;
 }
 if (a > 250) {
 price += (a - 250) * 1.5;
 }*/
