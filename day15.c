//Write a program to calculate the factorial of a number.
#include <stdio.h>  
int main(void) {
    int n;
    unsigned long long factorial = 1;

    printf("Enter a non-negative integer: ");
    if (scanf("%d", &n) != 1 || n < 0) {
        printf("Invalid input.\n");
        return 1;
    }

    for (int i = 1; i <= n; i++) {
        factorial *= i; // Calculating factorial
    }

    printf("Factorial of %d = %llu\n", n, factorial);

    return 0;
}