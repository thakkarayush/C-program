#include<stdio.h>

int main() {
    //Implicit Conversion
    float myFloat = 9;
    printf("%f\n", myFloat); // 9.000000
    int myInt = 9.99;
    printf("%d\n", myInt); // 9

    //Explicit Conversion
    float sum = (float) 5 / 2;
    printf("%f\n", sum); // 2.500000
    
    //You can also place the type in front of a variable
    int num1 = 5;
    int num2 = 2;
    sum = (float) num1 / num2;
    printf("%f\n", sum); // 2.500000

    //Decimal Precison and Type Conversion
    printf("%.1f", sum); // 2.5

  return 0;
}
