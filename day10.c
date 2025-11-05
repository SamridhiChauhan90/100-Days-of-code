// WAP to classify a triangle as equilateral, isosceles or scalene based on its side lengths.
#include <stdio.h>

int main(void) {
    double a, b, c;

    printf("Enter three side lengths: ");
    if (scanf("%lf %lf %lf", &a, &b, &c) != 3) {
        printf("Invalid input.\n");
        return 1;
    }

    if (a <= 0 || b <= 0 || c <= 0) {
        printf("Sides must be positive.\n");
        return 1;
    }

    if (a + b <= c || a + c <= b || b + c <= a) {
        printf("Not a valid triangle.\n");
    } else if (a == b && b == c) {
        printf("Equilateral triangle.\n");
    } else if (a == b || b == c || a == c) {
        printf("Isosceles triangle.\n");
    } else {
        printf("Scalene triangle.\n");
    }

    return 0;
}
