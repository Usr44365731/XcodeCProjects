#include <stdio.h>
#include <math.h>


int main(void) {
    
    printf("Type in 5 numbers separated with spaces: ");
    double arr[5], sum = 0, avr;
    scanf("%lf", &arr[0]); sum += arr[0];
    scanf("%lf", &arr[1]); sum += arr[1];
    scanf("%lf", &arr[2]); sum += arr[2];
    scanf("%lf", &arr[3]); sum += arr[3];
    scanf("%lf", &arr[4]); sum += arr[4];
    avr = sum/5;
    printf("Arithmetic average: %.4f\n", avr);
    
    
    return 0;
}

