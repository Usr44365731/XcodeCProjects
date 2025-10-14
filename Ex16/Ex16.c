#include <stdio.h>
#include <math.h>

int main(void) {
    
    double a, b, c; //18, -819, -721
    printf("Value of a: ");
    scanf("%lf", &a);
    printf("Value of b: ");
    scanf("%lf", &b);
    printf("Value of c: ");
    scanf("%lf", &c);
    printf("%.2lf\n", sqrt(pow(a, 2)+pow(b, 2)+pow(c, 2)));
    
    return 0;
}
