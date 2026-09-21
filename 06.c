#include <stdio.h>
int main() {

    // write a programme that check the given is prime or not?
    // thinking procees
    // agar pata chal jya wo number kitna number sa divide hai 
    // ok lets take n as input
    int n;  
    int prime = 0;  // if prime is not intiallise =  0 
        // it going to store garbage value 
    printf(" enter the no\n");
    scanf(" %d", &n);

    for ( int i =2; i<n; i++)
    {
        // now using if else statement to make it more clear
        if(n%i == 0){
            break;
        }   // C cannot print the final answer ("It is prime" or "It is not prime") 
        //while checking—it has to wait until all numbers are teste
         //( prime=1 is used as flag varible) 
    }                  //A flag variableis used to remember if something special
                        //happend during loop so you can check  later outside the loopn
    if(prime){
        printf("%d is not prime ", n);
        
    }
    else
    {
        printf("%d is  prime",n);
    }


    return 0;
}