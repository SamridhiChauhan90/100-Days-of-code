//WAP to calculate electricity billl based on units consumed with these rates:
//First 100 units at Rs. 4 per unit
//Next 100 units at Rs. 7 per unit
//Next 100 units at Rs. 10 per unit
//Above at Rs. 12 per unit
#include <stdio.h>

int main(void) {
    int units;
    float bill;

    printf("Enter the number of units consumed: ");
    if (scanf("%d", &units) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    if (units < 0) {
        printf("Invalid number of units.\n");
    } else if (units <= 100) {
        bill = units * 4;
        printf("Electricity bill: Rs. %.2f\n", bill);
    } else if (units <= 200) {
        bill = (100 * 4) + ((units - 100) * 7);
        printf("Electricity bill: Rs. %.2f\n", bill);
    } else if (units <= 300) {
        bill = (100 * 4) + (100 * 7) + ((units - 200) * 10);
        printf("Electricity bill: Rs. %.2f\n", bill);
    } else {
        bill = (100 * 4) + (100 * 7) + (100 * 10) + ((units - 300) * 12);
        printf("Electricity bill: Rs. %.2f\n", bill);
    }

    return 0;
}
