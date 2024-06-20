#include <stdio.h>

int main() {
    int a = 10;
    int b = 5;

    // Addition
    int sum = a + b;
    printf("Addition: %d + %d = %d\n", a, b, sum);

    // Subtraction
    int difference = a - b;
    printf("Subtraction: %d - %d = %d\n", a, b, difference);

    // Multiplication
    int product = a * b;
    printf("Multiplication: %d * %d = %d\n", a, b, product);

    // Division
    int quotient = a / b;
    printf("Division: %d / %d = %d\n", a, b, quotient);

    // Modulus
    int remainder = a % b;
    printf("Modulus: %d %% %d = %d\n", a, b, remainder);

    // Increment
    a++;
    printf("Increment: a++ = %d\n", a);

    // Decrement
    b--;
    printf("Decrement: b-- = %d\n", b);

    return 0;
}