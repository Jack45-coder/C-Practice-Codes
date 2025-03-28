//[Q - 2] Write a program to take a number from the user and return return the factorial of the given number using a function:
#include <stdio.h>
// DECLARE:-
long Factorial();
int main()
{
  int factorial = Factorial();       // CALL
  printf("Factorial = %d", factorial);
  return 0;
}
// DEFINED:-
long Factorial()
{
  int num;
  printf("Enter the number: ");
  scanf("%d", &num);
  int fact = 1;
  for (int i = 1; i <= num; i++)
  {
    fact = fact * i;
  }
  return fact;
}