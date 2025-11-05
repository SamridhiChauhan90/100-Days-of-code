//Write a program to check if a number is prime.
#include <stdio.h>
int main(void) {
    int n, is_prime = 1;

    printf("Enter a positive integer: ");
    if (scanf("%d", &n) != 1 || n <= 1) {
        printf("Invalid input.\n");
        return 1;
    }

    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            is_prime = 0;
            break;
        }
    }

    if (is_prime) {
        printf("%d is a prime number.\n", n);
    } else {
        printf("%d is not a prime number.\n", n);
    }

    return 0;
}