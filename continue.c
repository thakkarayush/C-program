#include <stdio.h>

int main() {
    // Example 1: Using continue in a for loop
    for (int i = 1; i <= 8; i++) {
        if (i == 4) {
            continue; // Skip iteration when i is 4
        }
        printf("%d ", i);
    }
    printf("\n");

    return 0;
}
