#include <stdio.h>

int main() {
    int a = 10;
    int b = 5;
    int c;

    // Simple assignment
    c = a;
    printf("Simple assignment: c = %d\n", c);

    // Add and assign
    c += b; // equivalent to c = c + b;
    printf("Add and assign: c += b => c = %d\n", c);

    // Subtract and assign
    c -= b; // equivalent to c = c - b;
    printf("Subtract and assign: c -= b => c = %d\n", c);

    // Multiply and assign
    c *= b; // equivalent to c = c * b;
    printf("Multiply and assign: c *= b => c = %d\n", c);

    // Divide and assign
    c /= b; // equivalent to c = c / b;
    printf("Divide and assign: c /= b => c = %d\n", c);

    // Modulus and assign
    c = a; // reset c to a
    c %= b; // equivalent to c = c % b;
    printf("Modulus and assign: c %%= b => c = %d\n", c);

    // Bitwise AND and assign
    c = a; // reset c to a
    c &= b; // equivalent to c = c & b;
    printf("Bitwise AND and assign: c &= b => c = %d\n", c);

    // Bitwise OR and assign
    c = a; // reset c to a
    c |= b; // equivalent to c = c | b;
    printf("Bitwise OR and assign: c |= b => c = %d\n", c);

    // Bitwise XOR and assign
    c = a; // reset c to a
    c ^= b; // equivalent to c = c ^ b;
    printf("Bitwise XOR and assign: c ^= b => c = %d\n", c);

    // Bitwise left shift and assign
    c = a; // reset c to a
    c <<= 1; // equivalent to c = c << 1;
    printf("Bitwise left shift and assign: c <<= 1 => c = %d\n", c);

    // Bitwise right shift and assign
    c = a; // reset c to a
    c >>= 1; // equivalent to c = c >> 1;
    printf("Bitwise right shift and assign: c >>= 1 => c = %d\n", c);

    return 0;
}