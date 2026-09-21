#include <stdio.h>

int main()
{
    // write table  in reverse order
    int n;
    printf(" ENTER THE NUMBER:\n");
    scanf(" %d", &n);

    for (int i = 10; i; i--)
    {
        printf("%d X %d = %d \n", n, i, n * i);
    }

    return 0;
}