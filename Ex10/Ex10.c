#include <stdio.h>

int main(void) {
    
    float a = 14, b = 44;
    
    printf("%f %f\n", a, b);
    printf("%.2f\n", a*b);
    printf("%.2f\n", (double)a/b); //IMPORTANT
    printf("%.2f\n%.2f\n", a+b, a-b);
    
    
    return 0;
}
