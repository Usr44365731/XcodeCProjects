#include <stdio.h>

int main(void) {
    
    int a;
    printf("Podaj liczbę punktów: ");
    scanf("%d", &a);
    
    if(a > 90 && a < 101) {
        
        printf("Piatka\n");
    }
    else if (a > 70 && a < 91) {
        
        printf("Czworka\n");
    }
    else if (a > 50 && a < 71) {
        
        printf("Trojka\n");
    }
    else if (a > 0 && a < 51) {
        
        printf("Dwojka\n");
    }
    else if (a < 0 || a > 100) {
        
        printf("Nieprawidłowa liczba punktów\n");
    }
    
    else {
        
        printf("Podano niepoprawne dane\n");
    }
    
    return 0;
}
