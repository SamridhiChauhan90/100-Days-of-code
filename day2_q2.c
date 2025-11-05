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
//#define PI 3.14159 It tells the preprocessor to replace every occurrence of  PI  in the program with  3.14159  before compilation.