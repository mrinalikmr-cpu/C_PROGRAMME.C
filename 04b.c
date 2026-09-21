#include <stdio.h>

int main()
{
    /* int sum=0;
     for (int i =0; i<10; i++){
         sum += (7*i);
     }
     printf( " the sum of no is %d", sum);*/

    // add table of any number
    int sum=0;
    int n;
    printf(" enter the no\n");
    scanf("%d", &n);

    for ( int i =1; i<=10 ; i++){
        sum += (n *i);
    }
    printf("%d", sum);

    return 0;
}