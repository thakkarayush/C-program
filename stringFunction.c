#include <stdio.h>
#include <string.h>

int main() {
    // Declare and initialize a string
    char greeting[] = "Hello, World!";

    // Concatenate two strings
    char dest[50] = "This is an";
    char src[50] = " example";
    strcat(dest, src);

    // Find the length of a string
    char str[] = "Geavan";
    size_t length = strlen(str);

    // Compare two strings
    char str1[] = "Geavan";
    char str2[] = "Coding";
    char str3[] = "Class";
    int result1 = strcmp(str1, str2);
    int result2 = strcmp(str2, str3);
    int result3 = strcmp(str1, str1);

    // Display results
    printf("Concatenated string: %s\n", dest);
    printf("Length of \"%s\": %zu\n", str, length);
    printf("Comparison of \"%s\" and \"%s\": %d\n", str1, str2, result1);
    printf("Comparison of \"%s\" and \"%s\": %d\n", str2, str3, result2);
    printf("Comparison of \"%s\" and \"%s\": %d\n", str1, str1, result3);

    return 0;
}
