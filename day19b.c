//Write a program to find the sum of digits of a number.
#include <stdio.h>

int main(void) {
    int n, sum = 0;

    printf("Enter a positive integer: ");
    if (scanf("%d", &n) != 1 || n < 0) {
        printf("Invalid input.\n");
        return 1;
    }

    while (n != 0) {
        sum += n % 10;
        n /= 10;
    }

    printf("Sum of digits is: %d\n", sum);
    return 0;
}
