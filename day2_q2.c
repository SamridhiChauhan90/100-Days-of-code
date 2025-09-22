#include <stdio.h>
#define PI 3.14159 // value of π

int main() {
    float radius, area, circumference;

    //Input radius
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    //calculate area and circumference
    area = PI * radius * radius;
    circumference = 2 * PI * radius;

    //display results 
    printf("Area of circle = %.2f\n", area);
    printf("circumference of circle = %.2f\n", circumference);

    return 0;
}