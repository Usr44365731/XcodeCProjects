#include <stdio.h>

int main(void) {
    
    int H, M, S;
    
    printf("Podaj godzine w formacie HH:MM:SS: "); //12:45:39
    scanf("%d: %d: %d", &H, &M, &S);
    int Sum = H*3600+M*60+S;
    int Number = Sum, DigitSum = 0;
    
    while (Number > 0) {
        DigitSum += Number % 10;
        Number /= 10;
    }
    
    printf("Od godziny 00:00:00 uplynelo: %d sekund\n", Sum); //45939
    printf("Suma cyfr z liczby %d rowna jest %d\n", Sum, DigitSum); // 30
    
    return  0;
}
