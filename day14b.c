//Write a program to print the product of even numbers from 1 to n.
#include <stdio.h>
int main(void) {
    int n, product = 1;

    printf("Enter a positive integer n: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Invalid input.\n");
        return 1;
    }

    for (int i = 2; i <= n; i += 2) {
        product *= i; // Multiplying the ith even number
    }

    printf("The product of even numbers from 1 to %d is: %d\n", n, product);

    return 0;
}