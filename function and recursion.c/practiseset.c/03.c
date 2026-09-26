// write a function to calculate force of attraction on a body of mass m exerted by earth
#include <stdio.h>
//prototype
float force( float mass);

// defination
float force( float mass){
    return mass* 9.8;
}


int main() {
int m = 2;
printf(" the value of force is %f\n",force(m));
    return 0;
}