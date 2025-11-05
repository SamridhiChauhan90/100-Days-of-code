//Write a program to find the 1’s complement of a binary number and print it.
#include <stdio.h>

int main(void) {
    unsigned int n, complement = 0;

    printf("Enter a binary number: ");
    if (scanf("%u", &n) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    // Find 1's complement
    complement = ~n;

    printf("1's complement is: %u\n", complement);
    return 0;
}
