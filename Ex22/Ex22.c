#include <stdio.h>

int main(void) {
    
    float sPrecNum;
    int prec;
    
    printf("Number: ");
    scanf("%f", &sPrecNum);
    printf("Precision: ");
    scanf("%d", &prec);
    
    printf("%.*f\n", prec, sPrecNum);
    
    
    return 0;
}
