//WAP to calculate library fine based on late days as follows.
//First 5 days late: Rs. 2 per day
//Next 5 days late: Rs. 4 per day
//Next 20 days late later: Rs. 6 per day
//More than 30 days: Membership Cancelled.
#include <stdio.h>

int main(void) {
    int late_days;
    float fine;

    printf("Enter the number of late days: ");
    if (scanf("%d", &late_days) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    if (late_days <= 0) {
        printf("No fine for on-time returns.\n");
    } else if (late_days <= 5) {
        fine = late_days * 2;
        printf("Library fine: Rs. %.2f\n", fine);
    } else if (late_days <= 10) {
        fine = (5 * 2) + ((late_days - 5) * 4);
        printf("Library fine: Rs. %.2f\n", fine);
    } else if (late_days <= 30) {
        fine = (5 * 2) + (5 * 4) + ((late_days - 10) * 6);
        printf("Library fine: Rs. %.2f\n", fine);
    } else {
        printf("Membership Cancelled.\n");
    }

    return 0;
}   