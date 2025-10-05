#include <stdio.h>
int main() {
    float principal, rate, time;
    float simple_interest, compound_interest;
    float amount = 1;
    int i;

    //input values
    printf("Enter principal amount: ");
    scanf("%f", &principal);

    printf("Enter rate of interest: ");
    scanf("%f", &rate);

    printf("Enter time (in years): ");
    scanf("%f", &time);

    //simple interest
    simple_interest = (principal * rate * time) / 100;
    
    //compound interets (loop method)
    amount = principal;
    for (i = 1; i <= (int)time; i++) {
        amount = amount * (1 + rate / 100);

    }
    compound_interest = amount - principal;
    //output
    printf("Simple Interest = %.2f\n", simple_interest);
    printf("Compound Interest = %.2f\n", compound_interest);

    return 0;
}

