#include <stdio.h>

int main() {
    char name[100];
    int age, grade;

    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);  // will include '\n'

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Enter your grade: ");
    scanf("%d", &grade);

    printf("\n--- User Details ---\n");
    printf("Name: %s", name);  // newline will still print naturally
    printf("Age: %d\n", age);
    printf("Grade: %d\n", grade);

    return 0;
}
