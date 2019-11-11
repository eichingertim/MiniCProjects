#include <stdio.h>

int main(void) {
    int sum = 0;
    int numbersEntered = 0;
    int currentEnteredNumber;

    do {
        printf("Enter next number you want to add: ");
        scanf("%ld", &currentEnteredNumber);
        if (currentEnteredNumber != 0)
        {
            sum += currentEnteredNumber;
            numbersEntered++;   
        }
    } while (currentEnteredNumber != 0);

    double middle = sum / numbersEntered;

    printf("\n Der Mittelwert der eingegebenen Werte ist %f\n", middle);
    
    
    return 0;
}