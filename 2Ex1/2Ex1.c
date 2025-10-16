#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <stdlib.h>

int main(void) {
    
    int a, b;
    
    printf("Give me two numbers to sum: ");
    
    if (scanf("%d %d", &a, &b) == 2) { // isdigit won't work on int
        printf("%d\n", a + b);
    } else {
        printf("Incorrect input\n");
        return 1;
    }
        
    return 0;
}
