#include <stdio.h>


    // EXAMPLE OF CALL BY REFRENCE
    // swap concept
    //  we use swap as function
    //  using void shows that it return nothing
    //  this function contains the logic to swap two values
    // it uses a temporary variable ( temp) ** temp act as temporary plate to hold value of a
    // so it is not lost when a  is overwriten by b.and ten assiggn value

    void swap(int *a, int *b); // swap is used to interchange the value of a and b
    void swap(int *a, int *b)   // * A * B STORES THE ADRESS OF MEMORY
    {

        int temp;
        temp = *a;
        *a = *b;
        *b = temp; // here we call the swap function in main function}
        
    }
            int main() {
            int a = 4, b = 5;

            // introduce swap function

            // & HERE PASSE THE ADDRESS TO THE MEMORY NOT COPIES OF VALUES
            swap(&a, &b); 

            printf(" the value of a is %d and the value of b is %d", a, b);
        

        return 0;
    }
    // successfully runs