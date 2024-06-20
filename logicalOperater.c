#include <stdio.h>

int main() {
    int a = 10;
    int b = 5;
    int c = 10;

    // Logical AND (&&)
    if (a == c && b < a) {
        printf("Both conditions are true: a == c && b < a\n");
    } else {
        printf("At least one of the conditions is false: a == c && b < a\n");
    }

    // Logical OR (||)
    if (a == c || b > a) {
        printf("At least one of the conditions is true: a == c || b > a\n");
    } else {
        printf("Both conditions are false: a == c || b > a\n");
    }

    // Logical NOT (!)
    if (!(b > a)) {
        printf("The condition is true: !(b > a)\n");
    } else {
        printf("The condition is false: !(b > a)\n");
    }

    return 0;
}
