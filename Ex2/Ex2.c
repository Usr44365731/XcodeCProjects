#include <stdio.h>
#include <ctype.h>

int main (void) {
    
   //I, V, X, L, C, D, M
    char a;
    printf("Podaj liczbę rzymską: ");
    scanf("%c", &a);

        if (isalpha(a) == 0) {
        
        printf("Podano niepoprawne dane\n");
    }
    
    switch (a) {
        case 'I':
            printf("1\n");
            break;
        case 'V':
            printf("5\n");
            break;
        case 'X':
            printf("10\n");
            break;
        case 'L':
            printf("50\n");
            break;
        case 'C':
            printf("100\n");
            break;
        case 'D':
            printf("500\n");
            break;
        case 'M':
            printf("1000\n");
            break;

        default:
            printf("Podano niepoprawna liczbe\n");
            break;
    }
    
    return 0;
}
