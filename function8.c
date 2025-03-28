// Qs - 1 : Write a program to call a function that returns the substraction of two number:
#include <stdio.h>
int substraction()
{
  int a, b;
  printf("Enter the first number: ");
  scanf("%d", &a);
  printf("Enter the second number: ");
  scanf("%d", &b);

  return a - b;
}
int main()
{
  int result = substraction();

  printf("%d", result);

  return 0;
}