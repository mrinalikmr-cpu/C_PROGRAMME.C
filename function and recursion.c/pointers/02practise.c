#include <stdio.h>

int main() {
    // write a program having a variable i print address of  i 
    // pass this variable to a function and print its address. are these addresses same?

  int  i = 987;
    printf(" the address of i is %u", &i);

    
    return 0;
}