//Write a program to check if a number is an Armstrong number.
#include <stdio.h>  
#include <math.h>
int main(void) {
    int n, original, remainder, digits = 0;
    double sum = 0.0;

    printf("Enter a positive integer: ");
    if (scanf("%d", &n) != 1 || n < 0) {
        printf("Invalid input.\n");
        return 1;
    }

    original = n;

    // Count the number of digits
    while (original != 0) {
        digits++;
        original /= 10;
    }

    original = n;

    // Calculate the sum of the powers of each digit
    while (original != 0) {
        remainder = original % 10;
        sum += pow(remainder, digits);
        original /= 10;
    }

    // Check if the sum is equal to the original number
    if ((int)sum == n) {
        printf("%d is an Armstrong number.\n", n);
    } else {
        printf("%d is not an Armstrong number.\n", n);
    }

    return 0;
}