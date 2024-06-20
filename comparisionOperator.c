#include <stdio.h>

int main() {
    int a = 10;
    int b = 5;
    int c = 10;

    // Equal to (==)
    if (a == c) {
        printf("%d is equal to %d\n", a, c);
    } else {
        printf("%d is not equal to %d\n", a, c);
    }

    // Not equal to (!=)
    if (a != b) {
        printf("%d is not equal to %d\n", a, b);
    } else {
        printf("%d is equal to %d\n", a, b);
    }

    // Greater than (>)
    if (a > b) {
        printf("%d is greater than %d\n", a, b);
    } else {
        printf("%d is not greater than %d\n", a, b);
    }

    // Less than (<)
    if (b < a) {
        printf("%d is less than %d\n", b, a);
    } else {
        printf("%d is not less than %d\n", b, a);
    }

    // Greater than or equal to (>=)
    if (a >= c) {
        printf("%d is greater than or equal to %d\n", a, c);
    } else {
        printf("%d is not greater than or equal to %d\n", a, c);
    }

    // Less than or equal to (<=)
    if (b <= c) {
        printf("%d is less than or equal to %d\n", b, c);
    } else {
        printf("%d is not less than or equal to %d\n", b, c);
    }

    return 0;
}
