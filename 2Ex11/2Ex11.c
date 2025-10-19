#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <stdlib.h>

int main(void) {
    
    int a;
    const char *words[] = {"zero", "jeden", "dwa", "trzy", "cztery", "piec", "szesc", "siedem", "osiem", "dziewiec", "dziesiec"};
    printf("Give me a number between 1 - 10: ");
    if (scanf("%d", &a) != 1) {
        printf("Incorrect input\n");
        return 1;
    }
    if (a < 0 || a > 10) {
        printf("Incorrect input data\n");
        return 2;
    }
    printf("%s\n", words[a]);
    return 0;
}
