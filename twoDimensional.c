#include <stdio.h>

int main() {
    int twoDArray[3][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };

    // Accessing elements
    printf("Element at row 1, column 2: %d\n", twoDArray[1][2]); // Output: 7

    return 0;
}
