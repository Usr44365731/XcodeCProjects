#include <stdio.h>

int main(void) {
    
    double C;
    printf("Temperature in ºC: "); //24
    scanf("%lf", &C);
    
    double F, K;
    F = (C * 1.8) + 32;
    K = C + 273.15;
    
    printf("%.2lf\n%.2lf\n", K, F);
    
    return 0;
}
