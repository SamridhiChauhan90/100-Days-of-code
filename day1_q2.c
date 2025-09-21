#include <stdio.h>
int main() {
    float num1,num2; //using float to handle decimals in division
    float sum, diff, prod, quot;
    //Inpit numbers
    printf("Enter first number: ");
    scanf("%f", &num1);
    printf("Enter second number: ");
    scanf("%f", &num2);
    //Calculate sum, difference, product
    sum = num1 + num2;
    diff = num1 + num2;
    prod = num1 * num2;
    //Hnadle division carefully
    if (num2 != 0) {
        quot = num1 / num2;
        printf("Quotient: %.2f\n", quot);
    } else {
        printf("Cannot divide by zero!\n");

    }
    //Display results
    printf("Sum: %.2f\n", sum);
    printf("Difference: %.2f\n", diff);
    printf("Product: %.2f\n", prod);
    return 0;
 }    
  
