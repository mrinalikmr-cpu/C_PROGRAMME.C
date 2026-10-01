// write a proggram to change the value of a variable to ten times of its 
// current value
#include <stdio.h>
void change_to_thirty_time(int*);   //  int* is pointer here

void change_to_thirty_time( int* a){
    *a = *a * 30 ;
}


int main() {
    int x = 45;
    printf(" the value of x is %d\n", x);
    
    return 0;
}