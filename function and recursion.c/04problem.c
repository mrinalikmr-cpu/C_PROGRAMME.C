#include <stdio.h>
// write a program using recursion to calculate nth element of fibonacci series;


// fibonacci(n) = fibonacci(n-1) + fibonacci(n-2;)
// 0 , 1,1,2,3, 5, 8 ,13 , 21,24
int fibonacci(int);

int fibonacci( int n){
    if(n == 1 || n==2){
    return n-1;
}
return fibonacci(n-1) + fibonacci(n-2);
}

//# defination prototype
int main() {

    int n =3;
    printf("the value of fibonacci series at %d", n , fibonacci(n));

    
    return 0;
}