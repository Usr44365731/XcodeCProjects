#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <stdlib.h>

int main(void) {
    
    int l, u, c = 0, sum = 0, size = 0;
    printf("Lower limit: ");
    if (scanf("%d", &l) != 1) {
        printf("Invalid input\n");
        return 1;
    } else if (l < 0) {
        printf("Only positive numbers are allowed\n");
        return 2;
    }
    printf("Upper limit: ");
    if (scanf("%d", &u) != 1) {
        printf("Invalid input\n");
        return 1;
    } else if (u < 0) {
        printf("Only positive numbers are allowed\n");
        return 2;
    }
    int div4[u];
    for (int i = l; i < u; i++) {
        if (i % 4 == 0) {
            div4[c] = i;
            c++;
        }
    }
    for (int j = 0; j < 100; j++) {
        if (div4[j] != 0) {
            sum += div4[j];
            size++;
        } else {
            break;
        }
    }
    printf("Sum of numbers divisible by 4: %d\nAmount of numbers divisible by 4: %d\n", sum, size);
    
    return 0;
}
