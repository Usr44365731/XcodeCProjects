#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <stdlib.h>

int main(void) {
    
    int D, M, Y;
    printf("Give me a date in DD-MM-YYYY format: "); //29-02-2016, -9-02-2016, 27\5\1916
    int correctFormat = scanf("%02d-%02d-%04d", &D, &M, &Y);
    
    if (correctFormat != 3) {
        printf("Incorrect input\n");
        return 1;
    }
    
    if (Y < 1 || M < 1 || D < 1 || M > 12) {
        printf("Incorrect\n");
        return 0;
    }
    
    //Non leap
    int daysInMonth[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    //Defining leap
    int leap = (Y % 4 == 0 && Y % 100 != 0) || (Y % 400 == 0); //Returns either 1 or 0, like int leap = 0/1, depending on the year
    
    if (leap) {
        daysInMonth[1] = 29;
    }
    
    if (D > daysInMonth[M - 1]) {
        printf("Incorrect\n");
        return 0;
    }
    
    printf("Correct\n");
    
    return 0;
}
