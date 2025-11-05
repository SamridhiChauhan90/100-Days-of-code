//Write a program to find the LCM of two numbers.
#include <stdio.h>
int main(void) {
    int a, b, max, lcm;

    printf("Enter two positive integers: ");
    if (scanf("%d %d", &a, &b) != 2 || a <= 0 || b <= 0) {
        printf("Invalid input.\n");
        return 1;
    }

    // LCM calculation
    max = (a > b) ? a : b; // Start from the maximum of a and b
    while (1) {
        if (max % a == 0 && max % b == 0) {
            lcm = max;
            break;
        }
        max++;
    }

    printf("LCM is: %d\n", lcm);
    return 0;
}