#include <stdio.h>
int main() {
    char name[30];
    printf("Enter name: ");
    fgets(name, sizeof(name), stdin); // Read string
    printf("Name: ");
    puts(name); // Display string
    return 0;
}
