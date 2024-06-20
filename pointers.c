#include <stdio.h>
#include <string.h>

int main() {
    // Declare an integer variable
    int myAge = 43;

    // Display memory address of myAge
    printf("Memory address of myAge: %p\n", &myAge);

    // Declare a pointer to myAge
    int *p = &myAge;

    // Dereference the pointer to get the value
    printf("Value of myAge: %d\n", *p);

    // Concatenate two strings
    char dest[50] = "This is an";
    char src[50] = " example";
    strcat(dest, src);
    printf("Concatenated string: %s\n", dest);

    // Perform basic arithmetic
    int a = 10, b = 5;
    printf("Sum: %d\n", a + b);
    printf("Difference: %d\n", a - b);
    printf("Product: %d\n", a * b);
    printf("Quotient: %d\n", a / b);

    return 0;
}
