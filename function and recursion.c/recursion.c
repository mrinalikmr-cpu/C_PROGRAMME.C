#include <stdio.h>
int factoria(int);
int factorial(int n){
    if(n == 1 || n == 0){ //base condition
        return 1;  // if ffunction reached to return iska aga ka nhi chlaga
    }
    // factorial(n) = factorial(n-1) *n
    return factorial(n-1) * n ;
}
int main() {
    int a =6;
    printf(" the factorial of %d is %d",a, factorial(a));
    // those problem should solve by recursion whose formula is recursive
    // a function define in C call itself is called recursion
    //ex : example is fatorial
    return 0;
}
/* the condition in a recursive function that stops further recursion is called base case
avoid memory error so that function can continue to run indefinitely
// the base case.*/