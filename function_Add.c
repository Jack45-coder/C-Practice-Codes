//[Q - 5] write a c program to call a function that return the addition of two numbers and print the result.

#include <stdio.h>
int AddNumbers(int a, int b); // FUNCTION DECLARTION.

int main()
{
  int num1, num2, sum;
  printf("Enter the Two numbers:\n");
  scanf("%d%d", &num1, &num2);
  sum = AddNumbers(num1, num2);
  printf("Sum of two numbers = %d", sum);
  return 0;
}
int AddNumbers(int a, int b)
{
  return a + b;
}