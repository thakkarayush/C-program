#include <stdio.h>

int main() {
    float threeDArray[2][3][2] = {
        {{1.1, 2.2}, {3.3, 4.4}, {5.5, 6.6}},
        {{7.7, 8.8}, {9.9, 10.0}, {11.1, 12.2}}
    };

    // Accessing elements
    printf("Element at layer 1, row 2, column 1: %.2f\n", threeDArray[1][2][1]); // Output: 12.20

    return 0;
}
