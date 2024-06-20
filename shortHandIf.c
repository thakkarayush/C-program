#include <stdio.h>

int main() {
    int number = 10;
    char *result;

    // Using the ternary operator to determine if the number is positive, negative, or zero
    result = (number > 0) ? "positive" : (number < 0) ? "negative" : "zero";

    printf("The number is %s.\n", result);

    return 0;
}
