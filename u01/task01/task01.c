#include <stdio.h>

int main(void) {

    double bodyWeight;
    double alcoholPercentage;
    double drunkenAmount;

    double timeClean;

    printf("\nEnter your bodyweight in kg: ");
    scanf("%lf", & bodyWeight);

    printf("\nEnter the percentage of alcohol in your drink: ");
    scanf("%lf", & alcoholPercentage);

    printf("\nEnter the volume you drank in liter: ");
    scanf("%lf", & drunkenAmount);

    timeClean = ((alcoholPercentage/100) * drunkenAmount * 1000 * 0.79)/(0.1 * bodyWeight);

    printf("\n\n It will take %f hours till you are clean xD\n\n", timeClean);

    return 0;
}