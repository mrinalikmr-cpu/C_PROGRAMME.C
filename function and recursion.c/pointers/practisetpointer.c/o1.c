// write a program to print the address of a variable. use this address to get the
//value of the variable
#include <stdio.h>


int main() {
    int i = 23;
    int *j = &i;  // formation of pointer
    
    printf(" the address of variable is %p \n ",&i );
    //also
    printf( " the value at this address is %d\n", *(&i));
    //%p == gives decimal expansion
    printf(" the value at this address is %d\n", *j);

    
    return 0;
}