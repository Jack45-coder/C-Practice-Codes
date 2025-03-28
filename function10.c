// Qs - 3 : Write a program to call afunction that takes user inputs and passes it to a function that returns the addition of these number.
#include <stdio.h>
int Addition(int a, int b)
{
  return a + b;
}
void takeInput()
{
  int num1, num2;
  printf("Enter the first number: ");
  scanf("%d", &num1);
  printf("Enter the second number: ");
  scanf("%d", &num2);

  int sum = Addition(num1, num2);
  printf("Addition of ttwo numbers = %d", sum);
}
int main()
{

  takeInput();
  return 0;
}
