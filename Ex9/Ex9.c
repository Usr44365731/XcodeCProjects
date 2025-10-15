#include <stdio.h>

int main(void) {
    
    int a = 14, b = 44;
    
    printf("%d %d\n", a, b);
    printf("%d\n", a*b);
    printf("%.2f\n", (double)a/b); //IMPORTANT
    printf("%d\n%d\n", a+b, a-b);
    
    
    return 0;
}
