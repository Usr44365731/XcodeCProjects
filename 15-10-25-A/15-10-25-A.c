#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(void) {
    
    char t[10];
    int n = 1;
    float e, s = 0;
    
    do {
        printf("a");
        gets(t);
        e = atof(t);
    } while (e <= 0);
    
    do {
        s += 1/(float)n;
        n++;
    } while (s <= e);
    
    printf("%d\n", n - 1);
    getchar();
    
    return 0;
}
