#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <stdlib.h>

int main(void) {
    
    int div4[100];
    int l, u, c = 0;
    printf("Lower limit: ");
    if (scanf("%d", &l) != 1) {
        printf("Invalid input\n");
        return 1;
    }
    printf("Upper limit: ");
    if (scanf("%d", &u) != 1) {
        printf("Invalid input\n");
        return 1;
    }
    for (int i = l; i < u; i++) {
        if (i % 4 == 0) {
            div4[c] = i;
            c++;
        }
    }
    
    for (int j = 0; j < 100; j++) {
        if (div4[j] != 0) {
            printf("%d\n", div4[j]);
        } else {
            break;
        }
    }
    
    return 0;
}
