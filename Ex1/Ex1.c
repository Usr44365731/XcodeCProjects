#include <stdio.h>

int main(void) {
    
    int a, b;
    printf("Podaj pierwsza liczbe: "); //2
    scanf("%d", &a);
    printf("Podaj droga liczbe: \n"); //-3
    scanf("%d", &b);
    printf("\n");
    
    int Sum = a+b, Roz = a-b, Mno = a*b;
    
    printf("Suma: %d\n", Sum); //-1
    printf("Roznica: %d\n", Roz); //5
    printf("Wynik mnozenia: %d\n\n", Mno); //-6
    
    printf("Suma: %d\nRoznica: %d\nWynik mnozenia: %d\n", Sum, Roz, Mno);
    
    return 0;
}
