#include <stdio.h>

int main()
{
    // while loop syntax
    /* initialization;
     while ( condition) {
         // code is to be executed
         increment or decrement;}*/

    // write a proogram to
    // sum of first 10 natural no
     int i = 1;
     int sum = 0;
    while (i <= 10)

    {
        sum += i;
        i++;
    }
    printf(" The sum of first 10 natural no is %d", sum);
    return 0;
}
