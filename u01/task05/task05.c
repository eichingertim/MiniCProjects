# include <stdio.h>
# include <math.h>

int main(void) {

    double K;
    double m;
    double p;

    double A;

    printf("\n Enter the amount of money you want to receive: ");
    scanf("%lf", &K);

    printf("\n Enter the pay tax rate: ");
    scanf("%lf", &p);

    printf("\n Enter the fix-price for pay taxes and repayment: ");
    scanf("%lf", &m);

    A = 12 * m;

    double zaehler = log(1 - ((p * K) / A));
    double nenner = log(1 + p);

    double time = -(zaehler/nenner);

    printf("\n\n Die Annuität ist %f", A);
    printf("\n Die Laufzeit beträgt %f Jahre\n", time);


    return 0;
}