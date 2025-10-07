#include <stdio.h>

int main(void) {
    
    int C;
    printf("Podaj temperature w Celsjuszach: "); //24
    scanf("%d", &C);
    printf("\n");
    
    float F, K, N;
    F = (C * 1.8) + 32;
    K = C + 273.15;
    N = C * 0.33;
    
    printf("F = %.2f\nK = %.2f\nN = %.2f\n", F, K, N);
    
    return 0;
}
