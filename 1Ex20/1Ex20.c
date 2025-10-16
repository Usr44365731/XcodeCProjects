#include <stdio.h>
#include <math.h>

int main(void) {
    
    double opp, adj , hyp, ang1, ang2, tanAlp; //6.218081, 2.737285
    
    printf("Opposite : ");
    scanf("%lf", &opp);
    printf("Adjacent: ");
    scanf("%lf", &adj);
    
    hyp = sqrt(pow(opp, 2) + pow(adj, 2));
    tanAlp= opp/adj;
    ang1 = atan(tanAlp) * (180 / M_PI); //Neat to know that
    ang2 = 90 - ang1;
    
    printf("Hypotenuse: %.2lf\n", hyp);
    printf("%.2lf\n%.2lf\n", ang1, ang2);
    
    return 0;
}
