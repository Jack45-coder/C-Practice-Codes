/* [Qs - 14] Write a program that defines two functions.
          . One function that returns the quotient when dividing two numbers
          . One function that returns the reminder when dividing two numbers.
          Input a = 240, b = 8
*/
#include <stdio.h>
int Divide(int num1, int num2);
int Reminder(int n1, int n2);
int main()
{
  int a, b;
  printf("Enter the two numbers:\n");
  scanf("%d %d", &a, &b);
  int result = Divide(a, b);
  printf("Quotient = %d\n", result);

  int Result = Reminder(a, b);
  printf("Reminder = %d", Result);
  return 0;
}
int Divide(int num1, int num2)
{
  int quotient = num1 / num2;
  return quotient;
}
int Reminder(int n1, int n2)
{
  int reminder = n1 % n2;
  return reminder;
}
