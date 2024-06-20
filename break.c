#include <stdio.h>

int main() {
    int i;
    double number, sum = 0.0;

    for (i = 1; i <= 10; ++i) {
        printf("Enter number %d: ", i);
        scanf("%lf", &number);

        // If the user enters a negative number, break out of the loop
        if (number < 0.0) {
            break;
        }

        sum += number; // Add the positive number to the sum
    }

    printf("Sum = %.2lf\n", sum);
    return 0;
}
