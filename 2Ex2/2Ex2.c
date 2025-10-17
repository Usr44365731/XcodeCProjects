#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <stdlib.h>

int main(void) {
    
    char num[20]; //(dd) ddd-dd-dd (24) 112-61-57
    int n = 20, area, N1, N2, N3;
    printf("Type in the phone number: ");
    fgets(num, n, stdin);
    
    if(sscanf(num, "(%d) %d-%d-%d", &area, &N1, &N2, &N3) == 4) {
        
        printf("(%02d)\n", area);
        printf("%03d-%02d-%02d\n", N1, N2, N3);
    } else {
        printf("Incorrect input\n");
        return 1;
    }
    
    return 0;
}
