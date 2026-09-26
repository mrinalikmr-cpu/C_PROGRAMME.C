#include <stdio.h>
//function is a way to break our code into chunks so that it is possible
//for a programmer to reuse rhem. it perform particular task.
//a function can be reused by the programmer in a given
// programme any number of time....
//function prototype
int sum(int,int);
//function defination
int sum(int x , int y) {  // x and y are parameters = variable place holder
                           // argument  are the actual value placed
                           // a function can return only one value at a time

    printf(" The sum is %d\n", x+y);
    return x+y;
}
int main() {

int a = 1;
int b =2;
 // int c= a+b;
 //printf(" the sum is %d",c);
 sum(a,b); // FUNCTION CALL

 int a1 =23;
 int b1= 17;
  sum(a1,b1);

    
    return 0;
}