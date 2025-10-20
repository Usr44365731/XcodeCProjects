#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    
    srand((unsigned)time(NULL));
    int randL = rand() % 101;
    int randU = rand() % 101;
    if (randL > randU) {
        randU = randL;
        randL = randU;
    }
    if (randL == randU) {
        randU++;
    }
    printf("Lower limit: %d\nUpper limit: %d\n", randL, randU);
    int c = 0, sum = 0, size = 0;
    int div4[randU];
    for (int i = randL; i < randU; i++) {
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
