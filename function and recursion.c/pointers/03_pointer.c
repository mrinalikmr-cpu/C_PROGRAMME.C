#include <stdio.h>
int sum( int , int);

int sum( int a , int  b){
    a =6 ; 
    return a+b;
}

int main() {
    //TYPES OF FUNCTION CALL    
    // CALL BY VALUE = SENDING THE VALUES OF ARGUMENT
    // CALL BY REFERENCE= SENDING THE ADDRESS OF ARGUMENT
  // printf(" the sum of a and b is %d", sum(1 ,2));

   //if we intiallise te number here is it going to work or rplace the value
    int x = 1 , y= 4;
    printf( " the sum of x and y is %d\n", sum(x,y));
    printf(" the value of x is %d\n",x);

   return 0;
}