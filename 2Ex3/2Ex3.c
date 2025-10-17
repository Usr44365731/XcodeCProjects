#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <stdlib.h>

int main(void) {
    
    char date[15];
    int n = 15, D, M, Y; //29-02-2016, -9-02-2016, 27\5\1916
    printf("Give me the date in format DD-MM-YYYY: ");
    fgets(date, n, stdin);
    
    if (sscanf(date, "%d-%d-%d", &D, &M, &Y) == 3) {
        
        
        printf("%02d-%02d-%04d\n" , D, M, Y);
    }
    
    return 0;
}
