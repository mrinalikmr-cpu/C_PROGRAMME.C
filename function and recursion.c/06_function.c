#include <stdio.h>
// write a recursive function to calculate the sum of first n natural number 
//prototype
int sum_natural(int);

// defination
int sum_natural(int n){
    //sum(n) = 1+2+3+4+5+.....n-1 +n
   // sum(n) = sum ( n-1)+n;
   // base case : jaha recursion rukaga
   if (n== 1) {
    return 1;
   }
   return sum_natural(n-1) + n;
}
int main() {
    printf("the sum of first 5 natural number is %d ", sum_natural(5));
    
    return 0;
}