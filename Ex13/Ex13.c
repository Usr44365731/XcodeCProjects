#include <stdio.h>

int main(void) {
    
    int a, b;
    printf("Type the first number: ");
    scanf("%d", &a);
    printf("Type the second number: ");
    scanf("%d", &b);
    
    printf("%d\n%d\n%d\n%d\n", a+b, a-b, a*b, a/b);
    
    return 0;
}
