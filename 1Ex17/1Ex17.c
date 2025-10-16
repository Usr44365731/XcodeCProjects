#include <stdio.h>
#include <math.h>


int main(void) {
    
    /*float arr[10], sum = 0, avr;
    printf("Type in 10 numbers separated with spaces: ");
    for (int i = 0; i < 10; i++) {
        scanf("%f", &arr[i]);
        sum += arr[i];
    }
    avr = sum/10;
    printf("Arithmetic average: %.4f\n", avr);*/
    
    printf("Type in 10 numbers separated with spaces: ");
    float arr[10], sum = 0, avr;
    scanf("%f", &arr[0]); sum += arr[0];
    scanf("%f", &arr[1]); sum += arr[1];
    scanf("%f", &arr[2]); sum += arr[2];
    scanf("%f", &arr[3]); sum += arr[3];
    scanf("%f", &arr[4]); sum += arr[4];
    scanf("%f", &arr[5]); sum += arr[5];
    scanf("%f", &arr[6]); sum += arr[6];
    scanf("%f", &arr[7]); sum += arr[7];
    scanf("%f", &arr[8]); sum += arr[8];
    scanf("%f", &arr[9]); sum += arr[9];
    avr = sum/10;
    printf("Arithmetic average: %.4f\n", avr);
    
    
    return 0;
}

