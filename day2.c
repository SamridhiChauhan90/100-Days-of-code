#include <stdio.h>
int main() {
    float length, breadth, area, perimeter;
    //Input length and breadth
    printf("Enter the length of the rectangle: ");
    scanf("%f", &length);
    
    printf("Enteer the breadth of the rectangle: ");
    scanf("%f", &breadth);
    //Calculate area and perimeter
    area = length * breadth;
    perimeter = 2 * (length + breadth);
    //Display results
    printf("Area of rectangle = %.2f\n", area);
    printf("Perimeter of rectangle = %.2f\n", perimeter);

    return 0;
}