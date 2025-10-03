#include <stdio.h>
int main() {
    int n, sum = 0;
    // Input n 
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    //calculate sum using loop 
    for (int i = 1; i <= n; i++) {
        sum += i;
    }
    //display result
    printf("Sum of first %d natural numbers = %d\n", n, sum);
    return 0;
}