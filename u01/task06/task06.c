#include <stdio.h>
#define _USE_MATH_DEFINES
#include <math.h>

double arc(double degrees) {
    return (degrees / 180) * M_PI;
}

int main(void) {

    int lambdaArray[4];
    int phiArray[4];

    float xArray[4];
    float yArray[4];

    for (int i = 0; i < 4; i++) {
        printf("\n Enter lambda and phi(e.g.:30 60): ");
        scanf("%ld %ld", &lambdaArray[i], &phiArray[i]);
    }

    for (int i = 0; i < 4; i++) {
        double delta = acos(cos(lambdaArray[i]/2)*cos(phiArray[i]));
        double alpha = acos(sin(phiArray[i])/sin(delta));

        xArray[i] = (arc(phiArray[i]) + arc(delta) * cos(alpha)) / 2;
        yArray[i] = ((arc(lambdaArray[i]) * cos(40)) + (2 * arc(delta) * sin(alpha))) / 2;
    }

    for (int i = 0; i < 4; i++)
    {
        printf("\n Papierkoordinaten: %f  %f", xArray[i], yArray[i]);
    }
    

    return 0;
}