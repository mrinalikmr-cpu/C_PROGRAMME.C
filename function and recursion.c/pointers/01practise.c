#include <stdio.h>

int main() {
// write a programe to print the address of a variable. use this address 
int i = 4;

int * ptr = &i ;  // u %u= undersigned int
printf(" the adress of variable is %p\n",&i); //& -stores memory
printf(" the adress of i is %u\n", &i);  // 
printf(" the address of i is %p\n",*(&i) );// bothr are same

// the value at adress 
printf(" the value at this address is %d", *ptr);

// we can also make ptr
    
    return 0;
}