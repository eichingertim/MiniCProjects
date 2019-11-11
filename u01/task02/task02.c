#include <stdio.h>

int j;

int M;
int N;

void calculateMAndN() {
    if (((int) j/100) == 17)
    {
        M = 23;
        N = 3;
    } else if (((int) j/100) == 18)
    {
        M = 23;
        N = 4;
    }else if (((int) j/100) == 19)
    {
        M = 24;
        N = 5;
    }else if (((int) j/100) == 20)
    {
        M = 24;
        N = 5;
    }else if (((int) j/100) == 21)
    {
        M = 24;
        N = 6;
    }else if (((int) j/100) == 22)
    {
        M = 25;
        N = 0;
    }else if (((int) j/100) == 23)
    {
        M = 26;
        N = 1;
    }else if (((int) j/100) == 24)
    {
        M = 25;
        N = 1;
    }
}

int main(void) {

    printf("\nEnter the year where you want to calculate easter-date (YYYY): ");
    scanf("%ld", &j);

    calculateMAndN();

    int a = j % 19;
    int b = j % 4;
    int c = j % 7;
    int d = ((19 * a) + M) % 30;
    int e = ((2 * b) + (4 * c) + (6 * d) + N) % 7;
    
    int marchEasterDate = 22 + d + e;
    int aprilEasterDate = d + e - 9;

    if (aprilEasterDate == 26)
    {
        aprilEasterDate = 19;
    } else if (aprilEasterDate == 25 && d == 28 && e == 6 && ((11 * M) + 11) % 30 < 19) {
        aprilEasterDate = 18;
    }

    if (marchEasterDate <= 31 && (aprilEasterDate > 30 || aprilEasterDate < 1))
    {
            printf("\n Ostern ist im Jahr %d am %d März.\n", j, marchEasterDate);
    } else {
            printf("\n Ostern ist im Jahr %d am %d April.\n", j, aprilEasterDate);

    }
    

    
    
    

    return 0;
}