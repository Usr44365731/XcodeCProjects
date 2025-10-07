#include <stdio.h>

int main(void) {
    
    int a, b;
    printf("Podaj pierwsza liczbe: ");
    scanf("%d", &a);
    printf("Podaj droga liczbe: \n");
    scanf("%d", &b);
    printf("\n");
    
    int Sum = a+b, Roz = a-b, Mno = a*b;
    
    printf("Suma: %d\n", Sum);
    printf("Roznica: %d\n", Roz);
    printf("Wynik mnozenia: %d\n\n", Mno);
    
    printf("Suma: %d\nRoznica: %d\nWynik mnozenia: %d\n", Sum, Roz, Mno);
    
    return 0;
}
