//Write a program to find the HCF (GCD) of two numbers.
#include <stdio.h>

int main(void) {
    int a, b;

    printf("Enter two positive integers: ");
    if (scanf("%d %d", &a, &b) != 2 || a <= 0 || b <= 0) {
        printf("Invalid input.\n");
        return 1;
    }

    // Find HCF using Euclidean algorithm
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }

    printf("HCF (GCD) is: %d\n", a);
    return 0;
}
