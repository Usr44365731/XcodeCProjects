#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <stdlib.h>

int main(void) {
    
    int a = 0;
    for (int i = 0; i < 501; i++) {
        printf("%d ", a);
        a += 2;
    }
    printf("\n");
}
