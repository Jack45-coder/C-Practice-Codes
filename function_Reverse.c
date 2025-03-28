// [Q - 9] Write a program to take a number from the user and reverse the number.

#include <stdio.h>
void ReverseNumber();

int main()
{

  ReverseNumber();
  return 0;
}
void ReverseNumber()
{
  int num, reverse = 0;
  printf("Enter the number: ");
  scanf("%d", &num);
  while (num > 0)
  {
    reverse = reverse * 10 + num % 10;
    num = num / 10;
  }
  printf("Reverse number = %d", reverse);
}