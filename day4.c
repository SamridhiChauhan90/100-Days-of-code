#include <stdio.h>

int main() {
    int a, b;
    // Input two numbers
    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);
    
    //swap without third variable (using addition and subtraction)
    a = a + b;
    b = a - b;
    a = a - b;
    // display results 
    printf("After swapping:\n");
    printf("First number = %d\n", a);
    printf("Second number = %d\n", b);
     return 0;
}