#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <stdlib.h>

int main(void) {
    
    double a, M, perMonth = 0; ///2189, 9, 2394.08
    printf("Starting amount of money: ");
    if (scanf("%lf", &a) != 1 || a < 0) {
        printf("Incorrect input\n");
        return 1;
    }
    printf("How many months: ");
    if (scanf("%lf", &M) != 1 || M < 0) {
        printf("Incorrect input\n");
        return 1;
    }
    double endMonth = a;
    if (M == 1) {
        printf("End amount of money: %.2lf\n", a + (a * 0.01));
        return 0;
    } else if (M == 0) {
        printf("End amount of money: %.2lf\n", a);
        return 0;
    } else {
        for (int i = 1; i < M + 1; i++) {
            perMonth += endMonth * 0.01;
            endMonth += perMonth;
            perMonth = 0;
        }
    }
    printf("End amount of money: %.2lf\n", endMonth);
    return 0;
}
