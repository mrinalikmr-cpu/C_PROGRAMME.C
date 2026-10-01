// THE VALUE AT ADDRESS OPERATOR(*)
// IF WE KNOW THE ADDRESS HOW CAN WE GET VALUE
// THE VALUE AT ADDRESS OR * IS USE TO FINF THE VALUE AT GIVEN ADDRESS
#include <stdio.h>
int main() {
    int i = 78;
    int *j = &i;  // 
   // int * j = &i;  // j is pointer pointing to i ( stores memory locatio)
    printf( " the adress of i is %p\n",*(&i));
    printf("the value of i is %d \n", (*j)) ; // &i stores data in memory *(&i) fetche sthe value stored at that adress
// use %d for adress
    return 0;
}
