// a pointer is a variable which stores the adddress of another variable
// we can find the address of variable  by using this code
#include <stdio.h>

int main()
{
    int i = 48;
    int j = 67;
    // intialllisation
    printf(" The address of i is %p\n", &i);   // we can also use %u
    printf(" the address of j is %p\n\n", &j); // which is for unsigned integer
    return 0;                                  // %p shows values in hexa decimal iss adress pa rakhi hue value nikalta hai
}