#include <stdio.h>

int main(void) {
    
    float dSpd, uSpd; //500MB
    printf("Podaj predkosc pobierania w (Mbit/s): "); //302.14
    scanf("%f", &dSpd);
    printf("Podaj predkosc wysylania w (Mbit/s): "); //100.3
    scanf("%f", &uSpd);
    printf("\n");
    
    float MBdSpd, MBuSpd;
    MBdSpd = dSpd / 8;
    MBuSpd = uSpd / 8;
    
    float SdSpd, SuSpd;
    SdSpd = 500 / MBdSpd;
    SuSpd = 500 / MBuSpd;
    
    printf("Czas pobrania pliku wielkosci 500.00 MB to %.2f sekund\nCzas wyslania pliku wielkosci 500.00 MB to %.2f sekund\n", SdSpd, SuSpd);
    
    return 0;
}
