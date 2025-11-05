# include <stdio.h>
stuct date_of_birth {
    int day;
    int month;
    int year;
};
int main() {
    struct date_of_birth dob;
    printf("Enter day, month and year of birth: ");
    scanf("%d %d %d", &dob.day, &dob.month, &dob.year);
    printf("Date of Birth: %02d/%02d/%04d\n", dob.day, dob.month, dob.year);
    return 0;
}
