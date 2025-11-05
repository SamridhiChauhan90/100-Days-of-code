//Write a program to reverse a given number.
#include <stdio.h>
int main(void) {
    int n, reversed = 0;

    printf("Enter an integer: ");
    if (scanf("%d", &n) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    while (n != 0) {
        reversed = reversed * 10 + n % 10;
        n /= 10;
    }

    printf("Reversed number: %d\n", reversed);

    return 0;
}