#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <stdlib.h>

int main(void) {
    
    int a;
    printf("Give me a number of points: ");
    if (scanf("%d", &a) != 1 || a < 0 || a > 20) {
        printf("Incorrect input\n");
        return 1;
    }
    if (a < 11) {
        printf("Ocena 2\n");
    } else if (a > 10 && a < 14) {
        printf("Ocena 3\n");
    } else if (a > 13 && a < 17) {
        printf("Ocena 4\n");
    } else if (a > 16 && a < 21) {
        printf("Ocena 5\n");
    }
    return 0;
}
