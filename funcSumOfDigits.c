// Qs - Write a program to take a number from the user and sum of digits:
// input - 5467 : O/P - 22.

#include <stdio.h>
int SumOfDigits(int num)
{
  int digsum = 0;
  while (num > 0)
  {
    digsum = digsum + num % 10;
    num = num / 10;
  }
  return digsum;
}
int main()
{
  int num1;
  printf("Enter the number: ");
  scanf("%ld", &num1);
  int digsum = SumOfDigits(num1);

  printf("Sum of digit is %ld", digsum);
  return 0;
}