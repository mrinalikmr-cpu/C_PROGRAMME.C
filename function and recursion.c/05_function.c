#include <stdio.h>

int main() {
    int a = 4;
    printf("%d %d %d\n",a, ++a , a++);
    // 6,6,4 // right side sa compile hua hai
    // technically c mai rules ke hisab sa ek hi function call ke andar ek hi variable ko bar bar change kare
    // then it is calle dundefine behaviour

    
    return 0;
}