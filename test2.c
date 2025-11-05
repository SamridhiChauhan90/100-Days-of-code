#include <stdio.h>
#include <string.h>  

struct s_name {
    char FN[50];
    char MN[50];
    char LN[50];
};
int main() {
    struct s_name S1, S2, S3, S4;
    strcpy(S1.FN, "Samridhi");
    strcpy(S1.LN, "Chauhan");
    printf("%s %s\n", S1.FN, S1.LN);
    return 0;
}
