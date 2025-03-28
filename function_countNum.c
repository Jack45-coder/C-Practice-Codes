//[Q - 6] Write a program to take a number from user and return the count of digits in that number using a function.
#include <stdio.h>
int countofDigits();
int main()
{

  int c = countofDigits();

  printf("count of Digits = %d", c);

  return 0;
}
int countofDigits()
{
  int num, count = 0;
  printf("Enter the number: ");
  scanf("%d", &num);
  while (num > 0)
  {
    count = count + 1;
    num /= 10;
  }

  return count;
}