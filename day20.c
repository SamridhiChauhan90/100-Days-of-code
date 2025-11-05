//Write a program to find the product of odd digits of a number.
#include <stdio.h>  
int main(void) {
    int n, product = 1, has_odd = 0;

    printf("Enter a positive integer: ");
    if (scanf("%d", &n) != 1 || n < 0) {
        printf("Invalid input.\n");
        return 1;
    }

    while (n != 0) {
        int digit = n % 10;
        if (digit % 2 != 0) { // Check if the digit is odd
            product *= digit;
            has_odd = 1;
        }
        n /= 10;
    }

    if (has_odd) {
        printf("Product of odd digits is: %d\n", product);
    } else {
        printf("No odd digits found.\n");
    }

    return 0;
}   