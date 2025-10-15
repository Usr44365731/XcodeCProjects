#include <stdio.h>

int main(void) {
    
    float a, b;
    printf("Type the first number: ");
    scanf("%f", &a);
    printf("Type the second number: ");
    scanf("%f", &b);
    
    printf("%f\n%f\n%f\n%f\n", a+b, a-b, a*b, a/b);
    
    return 0;
}
