// Write a program to print the square og first n natural numbers.

#include <stdio.h>
int main()
{
  int n;

  printf("Enter thr number: ");
  scanf("%d", &n);

  for (int i = 1; i <= n; i++)
  {
    printf("%d\n", i * i);
  }
  
  return 0;
}