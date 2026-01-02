#include <stdio.h>

int main() {
    float principal, rate, balance, interest;
    int years, i;

    // Input
    printf("Enter Principal Amount: ");
    scanf("%f", &principal);

    printf("Enter Rate of Interest (per year): ");
    scanf("%f", &rate);

    printf("Enter Number of Years: ");
    scanf("%d", &years);

    // Initial balance
    balance = principal;

    // Loop for yearly interest calculation
    for (i = 1; i <= years; i++) {
        interest = balance * rate / 100;
        balance = balance + interest;
    }

    // Output
    printf("\nFinal Balance after %d years = %.2f\n", years, balance);

    return 0;
}