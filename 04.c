#include <stdio.h>

int main()
{
  // write a program to calculate  sum of no of 8 in table
  //  int sum=0;
  //  for(int i = 1; i<= 10; i++)
  //   {
  //    sum+= (8*i);
  //   }
  //  printf(" the sum of table of 8is %d",sum);

  // take input from the user
  int n;
  int sum = 0;
  printf(" enter the no");
  scanf("%d", &n); // if you dont use & you get garbage data
  for (int i = 1; i <= 10; i++)
  {
    sum += (n * i);
  }
  printf(" the sum of table is %d", sum);
  return 0;
}