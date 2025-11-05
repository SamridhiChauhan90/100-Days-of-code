//Develop a recursive and non-recursive function FACT(num) to find the factorial of a number, n!, defined by FACT(n) = 1, if n = 0. Otherwise, FACT(n) = n * FACT(n-1). Using this function, write a C program to compute the binomial coefficient. Tabulate the results for different values of n and r with suitable messages
#include <stdio.h>

// Recursive function to calculate factorial of a number n
int factorial(int n) {
    // Base case: if n is 1 or less, return 1 (factorial of 0 or 1 is 1)
    if (n <= 1)
       return 1;
    else
       // Recursive case: multiply n by factorial of (n-1)
       return n * factorial(n-1);
}

int main() {
    int num;

    // Ask user to enter a number
    printf("Enter a number to find its factorial:\n");
    // Read input from user
    scanf("%d", &num);

    // Calculate factorial by calling recursive function and print the result
    printf("Factorial of %d is %d\n", num, factorial(num));

    return 0;
}
