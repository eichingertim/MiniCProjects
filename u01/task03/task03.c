#include <stdio.h>

int main(void) {

    int n;
    int sum = 0;

    printf("How many odd numbers should be added: ");
    scanf("%ld", &n);

    for (int i = 0; i <= n; i++)
    {
        sum += ((2 * i) - 1);
    }

    printf("\n The sum of %d odd numbers is: %d", n, sum);
    


    return 0;
}