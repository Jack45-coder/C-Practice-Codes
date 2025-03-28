// [Qs - 10] Write a program to take two numbers the user one as a base and the others as a power, then calculate and print the result using a function:-

#include <stdio.h>
long Calculate(int base, int power);
int main()
{
  int a, b;
  printf("Enter the base: ");
  scanf("%d", &a);
  printf("Enter theb power: ");
  scanf("%d", &b);

  int result = Calculate(a, b);
  printf("%ld", result);
  return 0;
}
long Calculate(int base, int power)
{
  int result = 1;
  for (int i = 1; i <= power; i++)
  {
    result = result * base;
  }
  return result;
}