#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <stdlib.h>

int main(void) {
    
    int a;
    
    printf("Give me a number: ");
    int correctInput = scanf("%d", &a); //1 or 0
    
    if (!correctInput) {
        printf("Incorrect input\n");
        return 1;
    }
    if (!a) {
        printf("Equal to zero\n");
    } else {
        printf("Not equal to zero\n");
    }
    
    return 0;
}

