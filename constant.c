#include<stdio.h>

int main() {
    const int MYNUM = 15;  // myNum will always be 15
    //MYNUM = 10;  // error: assignment of read-only variable 'MYNUM'

    printf("%d", MYNUM);
  return 0;
}
