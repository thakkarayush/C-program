#include <stdio.h>
#include <stdbool.h> // Include the header file for Boolean type

int main() {
    bool isTrue = true;
    bool isFalse = false;
    int a = 10;
    int b = 5;

    // Using Boolean variables in conditional statements
    if (isTrue) {
        printf("The value of isTrue is true.\n");
    } else {
        printf("The value of isTrue is false.\n");
    }

    if (isFalse) {
        printf("The value of isFalse is true.\n");
    } else {
        printf("The value of isFalse is false.\n");
    }

    // Using Boolean expressions
    if (a > b) {
        printf("a is greater than b.\n");
    } else {
        printf("a is not greater than b.\n");
    }

    // Assigning the result of a comparison to a Boolean variable
    bool comparisonResult = (a == b);
    if (comparisonResult) {
        printf("a is equal to b.\n");
    } else {
        printf("a is not equal to b.\n");
    }

    return 0;
}
